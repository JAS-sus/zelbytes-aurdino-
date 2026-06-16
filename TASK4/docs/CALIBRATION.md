# Sensor Calibration

## LDR Calibration

| Condition | ADC Value |
|-----------|------------|
| Dark | 95 |
| Bright | 910 |

### Light Bands

| Level | Range |
|---------|---------|
| Dark | 0–300 |
| Ambient | 301–700 |
| Bright | 701–1023 |

---

## Soil Moisture Calibration

| Condition | ADC Value |
|-----------|------------|
| Dry | 720 |
| Wet | 380 |

### Moisture Mapping

- 0% Moisture → ADC 720
- 100% Moisture → ADC 380

---

## DHT22

- Temperature and humidity values were verified through Serial Monitor.
- Sensor operated with a 2-second sampling interval.

---

## HC-SR04

- Distance measurements recorded in centimeters.
- Median filtering of three readings was used to reduce noise.
