#include <DHT.h>

#define DHTPIN 7
#define DHTTYPE DHT22
#define LDR_PIN A1
#define SOIL_PIN A0

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  Serial.println("Temp(C),Humidity(%),LDR,Soil");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int ldrValue = analogRead(LDR_PIN);
  int soilValue = analogRead(SOIL_PIN);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read DHT22!");
  } else {
    Serial.print(temperature);
    Serial.print(",");
    Serial.print(humidity);
    Serial.print(",");
    Serial.print(ldrValue);
    Serial.print(",");
    Serial.println(soilValue);
  }

  delay(2000);
}