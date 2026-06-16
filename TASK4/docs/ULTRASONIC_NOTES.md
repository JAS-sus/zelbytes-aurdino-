# HC-SR04 Ultrasonic Sensor Notes

## Wiring

* VCC → 5V
* GND → GND
* TRIG → D9
* ECHO → D10

## Sensor Placement

* Mounted facing the target surface.
* Kept free from nearby obstructions for accurate distance measurement.

## Observations

* Distance readings were measured successfully in centimeters.
* Three readings were filtered using a median filter to reduce noise.
* Invalid measurements were indicated as "ERR".

## Result

The HC-SR04 sensor was successfully interfaced with the Arduino and provided stable distance measurements through the Serial Monitor.
