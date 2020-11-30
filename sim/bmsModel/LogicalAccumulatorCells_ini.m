%%
% RITRacing, 2020. Contact Sean Bonaventure @ spb4464@rit.edu
numCells = 90; 
initialDeficit = zeros(numCells);
internalResistances = zeros(numCells);

for idx = 1:numCells
%% Initial Conditions
% Charge deficit
initialDeficit(idx) = 0.01 * randi([0, 100],1,1); %Ampere*hours

% Ambient Temperature
internalResistances(idx) = 0.0018;

end

%% Initialize the accumulator
open_system('LogicalAccumulatorModel')
baseDir = 'LogicalAccumulatorModel/Cells/';
cellDir = strcat(baseDir, 'Cell');
posYOffset = 150;
blockXOffset = 250;

% Add dischargeSigMux
muxTopPos = 200;
muxHeight = 75*numCells;
dischargeMuxPath = strcat(baseDir, 'DischargeMux');
add_block('simulink/Commonly Used Blocks/Demux', dischargeMuxPath);
set_param(dischargeMuxPath, 'position', [0, muxTopPos, 10, muxTopPos + muxHeight]);
set_param(dischargeMuxPath, 'Outputs', int2str(numCells));
DischargeMuxPorts = get_param(dischargeMuxPath, 'PortConnectivity');

% Load mux
loadMuxPath = strcat(baseDir, 'LoadMux');
add_block('simulink/Commonly Used Blocks/Demux', loadMuxPath);
set_param(loadMuxPath, 'position', [0, (muxTopPos + muxHeight) + 200, 10, (muxTopPos + muxHeight) + 200 + muxHeight]);
set_param(loadMuxPath, 'Outputs', int2str(numCells));
loadMuxPorts = get_param(loadMuxPath, 'PortConnectivity');

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
loadPortPath = strcat(baseDir, 'LoadIn');
add_block('simulink/Ports & Subsystems/In1', dichargeInPath);
set_param(dichargeInPath, 'position', [-100, muxTopPos + muxHeight/2, -60, (muxTopPos + muxHeight/2)+15]);
add_block('simulink/Ports & Subsystems/Out1', voltageLvlOutPath);
set_param(voltageLvlOutPath, 'position', [700, muxTopPos + muxHeight/2, 730, (muxTopPos + muxHeight/2)+15]);
add_block('simulink/Ports & Subsystems/In1', hvMinusPortPath);
set_param(hvMinusPortPath, 'position', [blockXOffset-100, 0, blockXOffset-70, 15]);
add_block('simulink/Ports & Subsystems/In1', loadPortPath);
set_param(loadPortPath, 'position', [-100, muxTopPos + muxHeight, -60, muxTopPos + muxHeight + 15]);
add_block('simulink/Ports & Subsystems/Out1', hvPlusPortPath);
set_param(hvPlusPortPath, 'position', [blockXOffset-100, numCells*posYOffset + 150, blockXOffset-70, numCells*posYOffset + 165]);

for i = 1:numCells
    blockDir = strcat(cellDir, int2str(i));
    add_block('AccCellGroup/CellGroup', blockDir);
    batVal = sprintf('%.4f', initialDeficit(i));
    IRVal = sprintf('%.4f', internalResistances(i));
    %Set the state of charge
    set_param(blockDir, 'InitialSOCDefficit', batVal);
    set_param(blockDir, 'InternalResistance', IRVal);
    set_param(blockDir, 'position', [blockXOffset, i*posYOffset, blockXOffset+100, i*posYOffset+100]);
    currBlockPorts = get_param(blockDir, 'PortConnectivity');
    currDischargePort = currBlockPorts(2);

    DischargeOutputPort = DischargeMuxPorts(i+1);
    add_line(baseDir, [DischargeOutputPort.Position; currDischargePort.Position]);
    
    % Add voltage sig converter
    currVoltagePort = currBlockPorts(4);
    VoltageInputPort = VoltageMuxPorts(i);
    add_line(baseDir, [currVoltagePort.Position; VoltageInputPort.Position]);
    
    loadMuxOutputPort = loadMuxPorts(i+1);
    currLoadPort = currBlockPorts(3);
    add_line(baseDir, [loadMuxOutputPort.Position; currLoadPort.Position]);

    if i > 1
       prevBlockDir = strcat(cellDir, int2str(i-1)); 
       prevBlockPorts = get_param(prevBlockDir, 'PortConnectivity');
       
       prevOutPort = prevBlockPorts(5);
       currInPort = currBlockPorts(1);
       add_line('LogicalAccumulatorModel/Cells', [prevOutPort.Position; currInPort.Position]);
    end
end

% Connect ports
dischargePortLocation = get_param(dichargeInPath, 'PortConnectivity');
voltageLvlPortLocation = get_param(voltageLvlOutPath, 'PortConnectivity');
DischargeMuxPortLocation = get_param(dischargeMuxPath, 'PortConnectivity');
VoltageMuxPortLocation = get_param(voltageMuxPath, 'PortConnectivity');
hvMinusPortLocation = get_param(hvMinusPortPath, 'PortConnectivity');
hvPlusPortLocation = get_param(hvPlusPortPath, 'PortConnectivity');
loadPortLocation = get_param(loadPortPath, 'PortConnectivity');
block1PortLocation = get_param(strcat(cellDir, int2str(1)), 'PortConnectivity');
lastBlockPortLocation = get_param(strcat(cellDir, int2str(numCells)), 'PortConnectivity');
block1InPort = block1PortLocation(1);
lastOutPort = lastBlockPortLocation(5);
hvMinusLocation = hvMinusPortLocation(1);
hvPlusLocation = hvPlusPortLocation(1);
add_line(baseDir, [hvMinusLocation.Position; block1InPort.Position]);
add_line(baseDir, [lastOutPort.Position; hvPlusLocation.Position]);

loadInPort = loadPortLocation(1);
loadMuxPort = loadMuxPorts(1);
add_line(baseDir,[loadInPort.Position; loadMuxPort.Position]);

dischargeInPort = dischargePortLocation(1);
voltageLvlOutPort = voltageLvlPortLocation(1);
dischargeMuxPort = DischargeMuxPortLocation(1);
voltageMuxPort = VoltageMuxPortLocation(numCells+1);
add_line(baseDir, [dischargeInPort.Position; dischargeMuxPort.Position]);
add_line(baseDir, [voltageMuxPort.Position; voltageLvlOutPort.Position]);




