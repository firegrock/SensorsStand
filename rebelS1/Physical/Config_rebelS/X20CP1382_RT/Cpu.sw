<?xml version="1.0" encoding="utf-8"?>
<?AutomationStudio Version=4.5.2.102?>
<SwConfiguration CpuAddress="SL1" xmlns="http://br-automation.co.at/AS/SwConfiguration">
  <TaskClass Name="Cyclic#1" />
  <TaskClass Name="Cyclic#2" />
  <TaskClass Name="Cyclic#3" />
  <TaskClass Name="Cyclic#4">
    <Task Name="Sensor_rea" Source="Sensor_reading.prg" Memory="UserROM" Language="ANSIC" Debugging="true" />
    <Task Name="Stand_cont" Source="Stand_control.prg" Memory="UserROM" Language="ANSIC" Debugging="true" />
    <Task Name="Communicat" Source="Communication.prg" Memory="UserROM" Language="ANSIC" Debugging="true" />
  </TaskClass>
  <Libraries>
    <LibraryObject Name="AsUDP" Source="Libraries.AsUDP.lby" Memory="UserROM" Language="binary" Debugging="true" />
    <LibraryObject Name="runtime" Source="Libraries.runtime.lby" Memory="UserROM" Language="binary" Debugging="true" />
    <LibraryObject Name="ComauLib" Source="Libraries.ComauLib.lby" Memory="UserROM" Language="ANSIC" Debugging="true" />
    <LibraryObject Name="asstring" Source="Libraries.asstring.lby" Memory="UserROM" Language="binary" Debugging="true" />
  </Libraries>
</SwConfiguration>