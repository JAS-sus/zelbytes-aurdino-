# Task 8 - IoT Lab Telemetry Integration

## Overview

This task demonstrates uploading environmental sensor telemetry data from an Arduino-based monitoring setup to the Zelbytes IoT Learning Lab cloud platform. A Python host script reads sensor values from the Serial port in CSV format and forwards them to the IoT Lab telemetry API.

## Files

* `telematry.py` — Python script for reading Serial data and posting telemetry
* `secrets.h.example` — Template containing placeholder API key values
* `README.md` — Project documentation
* `images/dashboard_screenshot.png` — Screenshot showing successful telemetry uploads

## Components Used

* Arduino Uno
* DHT22 Temperature & Humidity Sensor
* USB Cable
* Python 3.14
* Zelbytes IoT Lab API Key

## How to Run

1. Obtain the IoT Lab API key from **IoT Lab → My Instance**.
2. Store the API key in `secrets.h` (excluded using `.gitignore`).
3. Connect the Arduino Uno and verify the correct COM port.
4. Run the Python script:

   ```bash
   python telematry.py
   ```
5. Confirm successful HTTP responses in the terminal.
6. Open **IoT Lab → Dashboard** or **API Explorer** to verify incoming telemetry.

## Result

* Telemetry data was successfully uploaded to the Zelbytes IoT Learning Lab.
* Sensor readings were received and stored by the cloud endpoint.
* More than 10 telemetry samples were recorded and visible in the API Explorer.
* Data included temperature and humidity measurements collected from the bench setup.

## Device ID

```text
esp8266_bench_01
```

## Security Note

The actual API key is stored separately in `secrets.h` and is not committed to the repository. The file is excluded through `.gitignore` to prevent accidental exposure of credentials.
