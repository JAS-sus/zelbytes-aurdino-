Serial Monitor Workflow

1. Upload the sketch to the Arduino.
2. Open **Tools → Serial Monitor**.
3. Set the baud rate to **9600**.
4. Press the button and observe the output.
5. Verify that the LED toggles once per button press.

Expected Output

```text
Toggle
```

Pin Configuration

* LED: D13
* Push Button: D2 (`INPUT_PULLUP`)

Notes

* Uses active-low button logic.
* Debouncing is implemented using `millis()` to prevent multiple detections from a single press.
