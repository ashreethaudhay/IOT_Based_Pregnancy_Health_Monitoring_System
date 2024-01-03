#include <Wire.h>
#include <ArduinoJson.h>
#include "DHT.h"
#include <SoftwareSerial.h>

int piezoPin = A5;
int threshold = 120;
int sensorValue = 0;

int myBPM, myBPM1;
int heart;

#define DHTPIN A2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  delay(2000);
}

StaticJsonBuffer<500> jsonBuffer;
JsonObject& root = jsonBuffer.createObject();


void loop() {
  int beat = analogRead(A0);
  delay(1000);

  int h = dht.readHumidity();
  int t = dht.readTemperature();

  int sensorValue = analogRead(A1);
  int weight = map(sensorValue, 0, 1023, 0, 254);
  //Serial .println(weight);
  //  float voltage = sensorValue * (5.0 / 1023.0);

  int pressure = analogRead(A3);
  int value = map(pressure, 0, 1023, 0, 254);
  //Serial.println(value);
  //  float voltage = pressure * (5.0 / 1023.0);
  myBPM1 = analogRead(A4);
  sensorValue = analogRead(piezoPin);
  sensorValue = map(sensorValue, 0, 1023, 0, 150);
  Serial.println(sensorValue);

  Serial.println("");
  delay(4000);
  heart = 0;
  myBPM = 0;
  sensorValue = 0;
}