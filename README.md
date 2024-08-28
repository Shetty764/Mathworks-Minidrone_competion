# Mathworks-Minidrone_competion

# OBJECTIVE 

The main objective of the mathworks minidrone competition was to develop an image processing and a path planning algorithm that would enable the drone to autonomously follow the path on the ground. The controller and the dynamics of the drone was to be kept as it is for implementation of the algorithms on real hardware (Parrot Mambo QuadCopter) . 

# Description 

The control system architecture of the Parrot Mambo drone, designed for autonomous path following, is a complex and highly integrated system that combines advanced image processing, path planning, and control mechanisms to enable precise and reliable navigation. This drone, equipped with four brushless DC motors, is specifically engineered to autonomously follow a predetermined path marked by distinct colors, with red representing the path and blue representing the surroundings. The architecture ensures that the drone can successfully navigate through this environment, which includes multiple sharp turns, and ultimately land on a designated target area.

The first critical component of this system is the image processing module, which is responsible for interpreting the visual data captured by the drone’s downward-facing RGB camera. As the drone flies, the camera continuously captures images of the area below it, which are then processed in real-time to identify the path. The primary task of the image processing algorithm is to differentiate between the path (red) and the surrounding area (blue). This involves several stages, including color thresholding, segmentation, and filtering, which work together to isolate the path from the background. By converting the visual data into binary or segmented images, the system can identify the exact location and orientation of the path relative to the drone.

Image processing is crucial because it transforms raw visual data into actionable information that the drone can use for navigation. Without accurate image processing, the drone would be unable to discern the path from its surroundings, leading to potential deviations or even crashes. The robustness of the image processing algorithm is therefore essential to the overall performance of the drone, ensuring that it can operate effectively even in challenging lighting conditions or when the path features complex patterns or sharp turns.

Once the image processing algorithm has successfully identified the path, the next stage in the control system architecture is the path planning algorithm. The role of the path planning algorithm is to use the processed image data to determine the most efficient trajectory that the drone should follow. This involves calculating a series of waypoints that the drone will navigate through, taking into account the path’s geometry, including any sharp turns or obstacles that may be present. The path planning algorithm must ensure that the drone can smoothly transition from one segment of the path to another while maintaining a stable and controlled flight.In this context, the path planning algorithm is essential for guiding the drone along its intended route. It not only ensures that the drone follows the path accurately but also optimizes the flight trajectory to minimize energy consumption and avoid unnecessary maneuvers. The algorithm continuously updates the planned trajectory based on real-time data from the image processing module, allowing the drone to adapt to any changes in the path or unexpected obstacles. This dynamic adaptation is crucial for maintaining the drone’s course and ensuring that it reaches its destination efficiently.

After the path planning algorithm has determined the optimal trajectory, the control system takes over to execute the planned path. The control system is responsible for translating the high-level path information into specific motor commands that adjust the drone’s yaw, pitch, roll, and throttle. This involves precise control of the four brushless DC motors, which must work in unison to maintain the drone’s stability and orientation while navigating the path.The control system relies on feedback from the drone’s onboard sensors, including gyroscopes, accelerometers, and possibly GPS, to monitor the drone’s current state and make real-time adjustments. For instance, if the drone detects that it is drifting off course, the control system will make the necessary corrections by adjusting the motor speeds to steer the drone back onto the path. This closed-loop control mechanism is essential for maintaining the drone’s stability, especially when navigating sharp turns or flying in windy conditions.

The final phase of the drone’s operation is landing, which is also managed by the control system. As the drone approaches the end of the path, the image processing and path planning algorithms continue to provide real-time data to ensure a smooth and precise landing. The control system gradually reduces the drone’s altitude while aligning it with the target landing area, making any necessary adjustments to account for wind or other environmental factors.


The image processing and the path planning algorithm is explained in detail : 

# Image Processing Algorithm 

The image processing algorithm was carried in a number of steps : 
### 1. Image Segmentation Using Color Thresholder App

Image segmentation is a crucial initial step in processing the visual data from the Parrot Mambo drone’s camera. The Color Thresholder app in MATLAB is employed for this purpose, enabling the separation of specific colors from the image, which is essential for identifying the path and surroundings. The drone’s environment is typically designed with distinct color patterns, where the path might be red and the surroundings blue. Using the Color Thresholder app, the algorithm applies threshold values to the color channels (Red, Green, and Blue) to isolate the path from the background. This segmentation process converts the RGB image into a binary image, where the path is highlighted as white (value 1) and the surroundings as black (value 0). This clear distinction simplifies the subsequent processing steps by focusing only on the relevant areas of the image. Segmentation not only reduces the computational complexity but also enhances the accuracy of the drone’s path-following capability. By isolating the path, the drone can reliably identify the direction it needs to follow, even in the presence of noise or varying lighting conditions. This step ensures that the image data is pre-processed effectively, providing a clean input for further analysis like circle detection and waypoint calculation.

### 2. Using Hough Transform for Circle Detection :

After segmenting the image, the next step in the algorithm involves detecting specific geometric shapes, particularly circles, which represent the starting and landing points in the drone’s path. The Hough Transform is a robust technique used for this purpose. This transform maps points in the image space to a parameter space where potential circles can be identified based on the accumulation of evidence for circular shapes. In the context of the Parrot Mambo drone, the Hough Transform is applied to the binary image produced from the segmentation step. It identifies circles by searching for points in the image that satisfy the equation of a circle, allowing for the detection of the circular regions that signify the start and end of the drone’s path. The accuracy of the Hough Transform is critical because the detected circles guide the drone’s takeoff and landing. Misidentification could lead to erroneous positioning and affect the overall mission. By detecting the circles, the algorithm marks the critical points, ensuring that the drone knows precisely where to begin its journey and where to land, thereby improving the reliability and safety of its operations.

### 3. The Use of Field of View Mask and Annular Ring for Getting Waypoints : 

The final step in the image processing algorithm is determining the drone’s waypoints, which are essential for navigating the path accurately. This is achieved by combining a field of view (FOV) mask with an annular ring. The FOV mask is used to limit the area of interest to the region directly ahead of the drone, simulating the drone’s forward-looking perspective. This mask ensures that the algorithm focuses only on the relevant part of the image, disregarding any distractions outside the drone’s immediate path. The annular ring is a circular area within this FOV, defined by an inner and outer radius. It intersects with the segmented path, allowing the algorithm to identify points along the path that lie within this ring. These points are averaged to determine the next waypoint. The waypoint guides the drone’s movement by providing a target location within its current field of view. This approach ensures that the drone remains on course, adjusting its trajectory as it encounters curves or turns in the path. By using the FOV mask and annular ring together, the algorithm effectively narrows down the possible waypoints to those that are most relevant, ensuring smooth and accurate navigation throughout the flight. This step is crucial for maintaining the drone's alignment with the path and achieving precise control over its movements.


### 4. Final Error Calculation :
The waypoint for the next timestep of the drone for path planning is calculated using the average of the coordinates of all the white pixels (pixels carrying the value 1) .The Averaged coordinates of the waypoint is then subtracted from the coordinates of the centre of the frame (the position of the drone ) to output the the values of error in x and y coordinates , that is the difference in the x and y coordinates between the current posistion and the next waypoint. This output of error_x and error_y is further given to the image processing sub-system. 






 
