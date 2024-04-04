#include <stdio.h>
#include <Wire.h>
#include <Adafruit_BMP280.h>

#define LED_BUILTIN 23 // Définit la broche de la LED intégrée sur l'Arduino MKR Zero
Adafruit_BMP280 bmp; // Crée une instance de la classe Adafruit_BMP280

void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
   if (!bmp.begin()) { // Initialise le capteur BMP280
    Serial.println("Impossible de trouver un capteur BMP280, vérifiez le câblage !");
    while (1);
  }
   Serial.begin(9600);
}

void loop() {
   digitalWrite(LED_BUILTIN, HIGH);
   Serial.println("HIGH !");
   delay(1000);
 
   digitalWrite(LED_BUILTIN, LOW);
   Serial.println("LOW !");
   delay(1000);

   // Lit la température du BMP280
  float temperature = bmp.readTemperature();

  // Affiche la température sur le moniteur série
  Serial.print("Température: ");
  Serial.print(temperature);
  Serial.println(" °C");
}