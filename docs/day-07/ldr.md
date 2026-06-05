Day 07 – LDR Light Sensing

Objective

To measure ambient light intensity using an LDR and Arduino ADC, and classify light levels into Dark, Ambient, and Bright ranges.

Components

* Arduino Uno
* LDR
* 10 kΩ Resistor
* Breadboard and Jumper Wires

Procedure

An LDR voltage divider was built using a 10 kΩ resistor. The divider output was connected to A0 and read using `analogRead()`. Raw ADC values and estimated voltages were displayed through the Serial Monitor. Calibration thresholds were stored in `calibration.h`.

Observations

| Condition | ADC Reading |
| --------- | ----------- |
| Dark      |  175 - 200  |
| Normal    |  872 - 876  |
| Bright    |  948 - 960  |

Result

The LDR successfully detected changes in light intensity. Sensor readings were classified into Dark, Ambient, and Bright levels, providing a baseline for future threshold-based lighting control.
