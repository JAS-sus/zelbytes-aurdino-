Debugging Checklist

* Select the correct COM port.
* Match baud rate (9600 or 115200) in code and Serial Monitor.
* Use `Serial.println(F("text"))` to save RAM.
* Enable verbose logs only with `DEBUG` flag.
* Test serial commands:

  * `?` → Help
  * `l` → LED ON
  * `o` → LED OFF
* Check USB cable connection if serial disconnects occur.
* Excessive serial printing may affect timing.
