#include <DHT.h>

#define DHT_PIN 4
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  // CSV Header
  Serial.println(F("ms,temp_c,humidity_pct"));
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println(F("ERR,NaN,NaN"));
  } else {
    Serial.print(millis());
    Serial.print(',');
    Serial.print(t, 1);
    Serial.print(',');
    Serial.println(h, 1);
  }

  // Wait 2 seconds before next reading
  delay(2000);
}