# Automated Grow Bench (ESP8266)

## Description

This project implements an automated irrigation system using an ESP8266 NodeMCU. The system monitors soil moisture levels and controls a solenoid valve through a relay module to maintain adequate soil moisture. It also provides manual control through a push button and serial commands.

## Components Used

* ESP8266 NodeMCU
* Soil Moisture Sensor
* Relay Module
* Solenoid Valve
* Push Button

## System Operation

The soil moisture sensor continuously measures the moisture content of the soil. When the moisture level falls below a predefined threshold, the system activates the solenoid valve to irrigate the plant. Once the moisture level reaches the desired range, the valve is automatically turned off.

Manual operation is supported through a push button and serial commands, allowing the user to override automatic control when required.

## Serial Commands

* `STATUS` – Displays the current moisture reading, operating mode, and valve status.
* `AUTO` – Enables automatic irrigation mode.
* `FORCE_ON` – Manually turns the valve ON.
* `FORCE_OFF` – Manually turns the valve OFF.

## Version

**v1.0-capstone**
