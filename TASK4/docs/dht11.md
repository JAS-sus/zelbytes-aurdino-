Day 08 – DHT11 Temperature & Humidity Monitoring

Objective

To measure ambient temperature and humidity using a DHT11 sensor with Arduino.

Observations

| Time (ms) | Temp (°C) | Humidity (%) |
| --------- | --------- | ------------ |
| 21        | 32.7      | 63.6         |
| 2044      | 32.7      | 63.6         |
| 4068      | 32.7      | 63.5         |
| 6090      | 32.5      | 63.5         |
| 8114      | 32.7      | 63.5         |
| 10136     | 32.7      | 63.5         |

**Average Temperature:** 32.67 °C
**Average Humidity:** 63.53 %

Notes

* 2-second interval maintained between sensor reads.
* Sensor placed away from direct solenoid mist.
* No reference meter was available for comparison.

Result

The DHT11 sensor provided stable temperature and humidity readings, suitable for environmental monitoring and future irrigation-control applications.

**Sketch Commit:** `day-08-dht11`
