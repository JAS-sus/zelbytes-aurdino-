## Purpose

Ensure safe operation of the irrigation solenoid valve and prevent flooding, equipment damage, and electrical hazards.

## Safety Requirements

* Never drive the solenoid valve directly from an Arduino pin.
* Use a relay module with proper flyback protection.
* Keep the valve OFF by default at startup.
* Energize the valve only when watering is required.

## Firmware Interlocks

* Call `valveOff()` in `setup()`.
* Support an `ESTOP` command to immediately close the valve.
* Close the valve on reset, communication failure, or software fault.

## Plumbing Interlocks

* Manual ball valve installed upstream of the solenoid valve.
* Drip tray placed under the test setup.
* Never bypass the relay using a bench supply on live plumbing.

## Manual Shutoff Location

Upstream manual ball valve before the solenoid valve.
