%%
% Copyright 2012 The MathWorks, Inc.
% Modified by RITRacing, 2020. Contact Sean Bonaventure @ spb4464@rit.edu
numCellTypes = 90; 
% load('Kokam_LUT_3RC')%
results.T5C  = load('batteryParameterEstimation_results_3RC_5degC.mat');
results.T20C = load('batteryParameterEstimation_results_3RC_20degC.mat');
results.T40C = load('batteryParameterEstimation_results_3RC_40degC.mat');
SOC_LUT = results.T5C.SOC_LUT;

%% Thermal Properties
% Cell dimensions and sizes
cell_thickness = 0.018; %m
cell_width = 0.018; %m
cell_height = 0.0650; %m

% Cell surface area
cell_area = 2 * (...
    cell_thickness * cell_width +...
    cell_thickness * cell_height +...
    cell_width * cell_height); %m^2

% Cell volume
cell_volume = cell_thickness * cell_width * cell_height; %m^3
%%
for idx = 1:numCellTypes
%% Lookup Table Breakpoints

Battery(idx).SOC_LUT = SOC_LUT;
Battery(idx).Temperature_LUT = [5 20 40] + 273.15;

%% Em Branch Properties (OCV, Capacity)

% Battery capacity
Battery(idx).Capacity_LUT = [ 4 4 4]; %Ampere*hours

%% Em Branch Properties (OCV, Capacity)

% Em open-circuit voltage vs SOC rows and T columns
Battery(idx).Em_LUT = [ results.T5C.Em ...
                        results.T20C.Em ...
                        results.T40C.Em]; %Volts

%% Terminal Resistance Properties

% R0 resistance vs SOC rows and T columns
Battery(idx).R0_LUT = [ results.T5C.R0 ...
                        results.T20C.R0 ...
                        results.T40C.R0]; %Ohms

%% RC Branch 1 Properties

% R1 Resistance vs SOC rows and T columns
Battery(idx).R1_LUT = [ results.T5C.R1 ...
                        results.T20C.R1 ...
                        results.T40C.R1]; %Ohms

% R2 Resistance vs SOC rows and T columns
Battery(idx).R2_LUT = [ results.T5C.R2 ...
                        results.T20C.R2 ...
                        results.T40C.R2]; %Ohms

% R3 Resistance vs SOC rows and T columns
Battery(idx).R3_LUT = [ results.T5C.R3 ...
                        results.T20C.R3 ...
                        results.T40C.R3]; %Ohms

% C1 Capacitance vs SOC rows and T columns
Battery(idx).t1_LUT = [ results.T5C.tau1 ...
                        results.T20C.tau1 ...
                        results.T40C.tau1]; %Farads

% C2 Capacitance vs SOC rows and T columns
Battery(idx).t2_LUT = [ results.T5C.tau2 ...
                        results.T20C.tau2 ...
                        results.T40C.tau2]; %Farads

% C3 Capacitance vs SOC rows and T columns
Battery(idx).t3_LUT = [ results.T5C.tau3 ...
                        results.T20C.tau3 ...
                        results.T40C.tau3]; %Farads

%% 
% Cell mass
Battery(idx).cell_mass = 0.05; %kg

% Volumetric heat capacity
% assumes uniform heat capacity throughout the cell
% ref: J. Electrochemical Society 158 (8) A955-A969 (2011) pA962
Battery(idx).cell_rho_Cp = 2.04E6; %J/m3/K

% Specific Heat
Battery(idx).cell_Cp_heat = Battery(idx).cell_rho_Cp * cell_volume / Battery(idx).cell_mass; %J/kg/K
%% Initial Conditions
% Charge deficit
% Battery(idx).Qe_init = 15.6845; %Ampere*hours

% Ambient Temperature
Battery(idx).T_init = 20 + 273.15; %K

end
%% Initial charge deficit
%Battery(1).SOC0 = 0.2;
%Battery(2).SOC0 = 0.22; %Ampere*hours
%Battery(3).SOC0 = 0.24; %Ampere*hours
rng(0, 'twister'); %initialize rng

for i = 1:numCellTypes
    Battery(i).SOC0 = 0.001 * randi([700, 750],1,1);
end
% Convective heat transfer coefficient
% For natural convection this number should be in the range of 5 to 25
h_conv = 5; %W/m^2/K Cell-to-cell
h_conv_end = 10; %W/m^2/K End cells to ambient

%% Passive balancing parameters
% load('tempParam')
I_cc = 4;
R = .2;
R_bleed = 20;
T_volt = 600;
V_th = 11.5;
deltaV = 0.01;
V_top = 4.1;

%%
P_gain = 100;
I_gain = 10;

%% Initialize the accumulator
open_system('AccumulatorModel')
numCells = 5;
baseDir = 'AccumulatorModel/Cells/';
cellDir = strcat(baseDir, 'Cell');
simulinkPSConverterDir = strcat(baseDir, 'S-PS');
PSSimulinkConverterDir = strcat(baseDir, 'PS-S');
posYOffset = 150;
blockXOffset = 250;

% Add dischargeSigMux
muxTopPos = 200;
muxHeight = 300;
dischargeMuxPath = strcat(baseDir, 'DischargeMux');
add_block('simulink/Commonly Used Blocks/Demux', dischargeMuxPath);
set_param(dischargeMuxPath, 'position', [0, muxTopPos, 10, muxTopPos + muxHeight]);
set_param(dischargeMuxPath, 'Outputs', int2str(numCells));
DischargeMuxPorts = get_param(dischargeMuxPath, 'PortConnectivity');
% Add voltageSigMux
voltageMuxPath = strcat(baseDir, 'VoltageMux');
add_block('simulink/Commonly Used Blocks/Mux', voltageMuxPath);
set_param(voltageMuxPath, 'position', [600, muxTopPos, 610, muxTopPos + muxHeight]);
set_param(voltageMuxPath, 'Inputs', int2str(numCells));
VoltageMuxPorts = get_param(voltageMuxPath, 'PortConnectivity');

% Add ports
dichargeInPath = strcat(baseDir, 'DischargeIn');
voltageLvlOutPath = strcat(baseDir, 'VoltageLvlOut');
hvMinusPortPath = strcat(baseDir, 'HV-');
hvPlusPortPath = strcat(baseDir, 'HV+');
add_block('simulink/Ports & Subsystems/In1', dichargeInPath);
set_param(dichargeInPath, 'position', [-100, muxTopPos + muxHeight/2, -60, (muxTopPos + muxHeight/2)+15]);
add_block('simulink/Ports & Subsystems/Out1', voltageLvlOutPath);
set_param(voltageLvlOutPath, 'position', [700, muxTopPos + muxHeight/2, 730, (muxTopPos + muxHeight/2)+15]);
add_block('nesl_utility/Connection Port', hvMinusPortPath);
set_param(hvMinusPortPath, 'position', [blockXOffset-100, 0, blockXOffset-70, 15]);
add_block('nesl_utility/Connection Port', hvPlusPortPath);
set_param(hvPlusPortPath, 'position', [blockXOffset-100, numCells*posYOffset + 150, blockXOffset-70, numCells*posYOffset + 165]);

for i = 1:numCells
    blockDir = strcat(cellDir, int2str(i));
    add_block('LibGen_lib/CellGroup1', blockDir);
    socVal = [0.6, 0.7, 0.8, 0.9, 1];
    batVal = sprintf('%.4f', socVal(i));
    %Set the state of charge
    set_param(blockDir, 'Cell1StateOfCharge', batVal);
    set_param(blockDir, 'Cell2StateOfCharge', batVal);
    set_param(blockDir, 'Cell3StateOfCharge', batVal);
    %We need to do this to override the default initial state of charge
    set_param(blockDir, 'Cell1StateOfCharge_specify', 'on');
    set_param(blockDir, 'Cell2StateOfCharge_specify', 'on');
    set_param(blockDir, 'Cell3StateOfCharge_specify', 'on');
    set_param(blockDir, 'position', [blockXOffset, i*posYOffset, blockXOffset+100, i*posYOffset+100]);
    currBlockPorts = get_param(blockDir, 'PortConnectivity');
    currDischargePort = currBlockPorts(1);
    PSConverterDir = strcat(simulinkPSConverterDir, int2str(i));
    
    % Add discharge signal converter
    add_block('nesl_utility/Simulink-PS Converter', PSConverterDir);
    set_param(PSConverterDir, 'position', [blockXOffset-50, i*posYOffset, blockXOffset-40, i*posYOffset+30]);
    PSConverterPorts = get_param(PSConverterDir, 'PortConnectivity');
    PSRightPort = PSConverterPorts(2);
    currDischargeport = currBlockPorts(1);
    add_line(baseDir, [PSRightPort.Position; currDischargeport.Position]);
    DischargeOutputPort = DischargeMuxPorts(i+1);
    PSLeftPort = PSConverterPorts(1);
    add_line(baseDir, [DischargeOutputPort.Position; PSLeftPort.Position]);
    
    % Add voltage sig converter
    SConverterDir = strcat(PSSimulinkConverterDir, int2str(i));
    add_block('nesl_utility/PS-Simulink Converter', SConverterDir);
    set_param(SConverterDir, 'position', [blockXOffset+150, i*posYOffset+40, blockXOffset+160, i*posYOffset+70]);
    SConverterPorts = get_param(SConverterDir, 'PortConnectivity');
    SLeftPort = SConverterPorts(2);
    currVoltagePort = currBlockPorts(5);
    add_line(baseDir, [SLeftPort.Position; currVoltagePort.Position]);
    VoltageInputPort = VoltageMuxPorts(i);
    PRightPort = SConverterPorts(1);
    add_line(baseDir, [PRightPort.Position; VoltageInputPort.Position]);
    
    if i > 1
       prevBlockDir = strcat(cellDir, int2str(i-1)); 
       prevBlockPorts = get_param(prevBlockDir, 'PortConnectivity');
       
       prevOutPort = prevBlockPorts(3);
       currInPort = currBlockPorts(2);
       %prevHeatProt = prevBlockPorts(4);
       %currHeatPort = currBlockPorts(4);
       add_line('AccumulatorModel/Cells', [prevOutPort.Position; currInPort.Position]);
       %add_line('AccumulatorModel/Cells', [prevHeatProt.Position; currHeatPort.Position]);
    end
end

% Connect ports
dischargePortLocation = get_param(dichargeInPath, 'PortConnectivity');
voltageLvlPortLocation = get_param(voltageLvlOutPath, 'PortConnectivity');
DischargeMuxPortLocation = get_param(dischargeMuxPath, 'PortConnectivity');
VoltageMuxPortLocation = get_param(voltageMuxPath, 'PortConnectivity');
hvMinusPortLocation = get_param(hvMinusPortPath, 'PortConnectivity');
hvPlusPortLocation = get_param(hvPlusPortPath, 'PortConnectivity');
block1PortLocation = get_param(strcat(cellDir, int2str(1)), 'PortConnectivity');
lastBlockPortLocation = get_param(strcat(cellDir, int2str(numCells)), 'PortConnectivity');
block1InPort = block1PortLocation(2);
lastOutPort = lastBlockPortLocation(3);
hvMinusLocation = hvMinusPortLocation(1);
hvPlusLocation = hvPlusPortLocation(1);
add_line(baseDir, [block1InPort.Position; hvMinusLocation.Position]);
add_line(baseDir, [lastOutPort.Position; hvPlusLocation.Position]);

dischargeInPort = dischargePortLocation(1);
voltageLvlOutPort = voltageLvlPortLocation(1);
dischargeMuxPort = DischargeMuxPortLocation(1);
voltageMuxPort = VoltageMuxPortLocation(numCells+1);
add_line(baseDir, [dischargeInPort.Position; dischargeMuxPort.Position]);
add_line(baseDir, [voltageMuxPort.Position; voltageLvlOutPort.Position]);




