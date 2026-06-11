# Irrigation State Machine

## States

* **IDLE**: System waiting for valid sensor readings.
* **IRRIGATING**: Valve ON, watering plants.
* **COOLDOWN**: Valve OFF, waiting before next irrigation cycle.
* **FAULT**: DHT sensor failed 3 consecutive reads. Irrigation disabled.



## State Diagram

                +----------------+
                |     IDLE       |
                | Monitor Soil & |
                | DHT22 Values   |
                +----------------+
                        |
            Soil Value > 400 (DRY)
                        |
                        v
                +----------------+
                |  IRRIGATING    |
                | Relay ON       |
                | Valve ON       |
                | LED ON         |
                +----------------+
                        |
             Soil Value ≤ 400 (WET)
                        |
                        v
                +----------------+
                |   COOLDOWN     |
                | Relay OFF      |
                | Valve OFF      |
                | LED OFF        |
                +----------------+
                        |
                Cooldown Time Over
                        |
                        v
                +----------------+
                |     IDLE       |
                +----------------+

      DHT22 Fails 3 Consecutive Times
                        |
                        v
                +----------------+
                |     FAULT      |
                | Irrigation OFF |
                | Relay OFF      |
                | LED OFF        |
                +----------------+


# Test Log – Irrigation State Machine

## Test Results

| Test No. | Soil Value | Soil Status | Temperature (°C) | Humidity (%) | State      | Relay/Valve | LED |
| -------- | ---------- | ----------- | ---------------- | ------------ | ---------- | ----------- | --- |
| 1        | 366        | WET         | 33.4             | 78.1         | IDLE       | OFF         | OFF |
| 2        | 365        | WET         | 33.4             | 78.1         | IDLE       | OFF         | OFF |
| 3        | 365        | WET         | 33.4             | 78.1         | IDLE       | OFF         | OFF |
| 4        | 450        | DRY         | 33.4             | 78.1         | IRRIGATING | ON          | ON  |
| 5        | 470        | DRY         | 33.4             | 78.1         | IRRIGATING | ON          | ON  |
| 6        | 380        | WET         | 33.4             | 78.1         | COOLDOWN   | OFF         | OFF |
| 7        | 365        | WET         | 33.4             | 78.1         | IDLE       | OFF         | OFF |

