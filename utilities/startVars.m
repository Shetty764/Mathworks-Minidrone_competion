%% startVars.m - Initialize variables
% This script initializes variables and buses required for the model to
% work.

% Copyright 2013-2019 The MathWorks, Inc.

% Register variables in the workspace before the project is loaded
initVars = who;

% Variants Conditions
asbVariantDefinition;
VSS_COMMAND = 0;       % 0: Signal builder, 1: Joystick, 2: Pre-saved data, 3: Pre-saved data in a Spreadsheet
VSS_SENSORS = 1;       % 0: Feedthrough, 1: Dynamics
VSS_ENVIRONMENT = 0;   % 0: Constant, 1: Variable
VSS_VISUALIZATION = 3; % 0: Scopes, 1: Send values to workspace, 2: FlightGear, 3: Simulink 3D.
VSS_VEHICLE = 1;       % 0: Linear Airframe, 1: Nonlinear Airframe.
 
% Bus definitions
asbBusDefinitionCommand; 
asbBusDefinitionSensors;
asbBusDefinitionEnvironment;
asbBusDefinitionStates;

% Enum definitions
asbEnumDefinition;

% Sampling rate
Ts= 0.005;

% Simulation time
TFinal = 100;

% Geometric properties
thrustArm = 0.10795;

% Initial conditions
init.date = [2017 1 1 0 0 0];
init.posLLA = [42.299886 -71.350447 71.3232];
init.posNED = [0.5 1 -0.046];
init.vb = [0 0 0];
init.euler = [0 0 0];
init.angRates = [0 0 0];

% Initialize States:
States = Simulink.Bus.createMATLABStruct('StatesBus');
States.V_body = init.vb';
States.Omega_body = init.angRates';
States.Euler = init.euler';
States.X_ned = init.posNED';
States.LLA = init.posLLA;
States.DCM_be = angle2dcm(init.euler(3),init.euler(2),init.euler(1));

% Environment
rho = 1.184;
g = 9.81;

% Variables
% Load MAT file with model for persistence
load('modelParrot');
% Obtain vehicle variables
vehicleVars;
% Obtain sensor variables
sensorsVars;
% Obtain controller variables
controllerVars;
% Obtain command variables
commandVars;
% Obtain estimator variables
estimatorVars;
% Obtain visualization variables
visualizationFlightGearVars;

% Simulation Settings
takeOffDuration = 1;

%% Custom Variables
% Add your variables here:
% myvariable = 0;

% Vision Ts
VTs= 40*Ts;

% Register variables after the project is loaded and store the variables in
% initVars so they can be cleared later on the project shutdown.
endVars = who;
initVars = setdiff(endVars,initVars);
clear endVars;

% LocalWords:  myvariable

% The file supports the "parrotMinidroneCompetition.prj" file project. It
% contains all the variables necessary to perform the simulation. The file
% was developed for the IFAC2020 MathWorks Minidrone Competition by the
% UNISANNIO Team consisting of
%
% Mario Terlizzi (Team Captain) <mario.terlizzi@unisannio.it>
% Muhammad Aatif <maatif@unisannio.it>
% Luigi Russo <luigi.russo@unisannio.it>
% Amin Bassiri <basiri@unisannio.it>
%
% Copyright 2020

%% IMAGE PROCESSING SYSTEM - Image Binarization Block

%G_B_GAIN = 2;
%BINARIZER_THRESHOLD = 100;

%% IMAGE PROCESSING SYSTEM - Waypoints Follower block

%SQUARE_KERNEL = 8;

%FOV = 2.9;  %Field of view= 2*(pi/FOV) this is a portion of the circumference

%MIN_RADIUS_CROWN = 27;
%MAX_RADIUS_CROWN = 28;

size_x = 160 ;
size_y = 120 ;

FRAME_SIZE_HEIGHT = 120;
FRAME_SIZE_WIDTH = 160;

COG_X = (FRAME_SIZE_HEIGHT/2);
COG_Y = (FRAME_SIZE_WIDTH/2);

%% IMAGE PROCESSING SYSTEM - Land Marker Detector block

%DISK_KERNEL = 11;

%% PATH PLANNING SYSTEM - Task Planning block

FLAG_WAIT_FOR_HOVERING = 0;

%% PATH PLANNING SYSTEM - Nonlinear Path Planner/ - X PLANNER & Y PLANNER

GAIN_LANDING = 0.0022;

GAIN_TRACK = 0.0038;

%% PATH PLANNING SYSTEM - Take off checker block

Z_LOW = -1;
Z_HIGH = -1.2;

%% PATH PLANNING SYSTEM - Nonlinear Path Planner - X PLANNER && Y PLANNER - x derivativepart & y derivative part

CHANGE_DERIVATIVE_ERROR_THRESHOLD = 2;       
DERIVATIVE_GAIN = 0.002 ;
TIME_HOLD = 0.2;

%% PATH PLANNING SYSTEM - Non linear Path Planner - Z PLANNER 

DELAY_LANDING = 4;

MAX_ERROR_LANDING = 5;


