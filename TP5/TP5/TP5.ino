// Premier partie ------------------------------------------------------------------------------------------------------------------------------------------------------------

// #include <SoftwareSerial.h>

// #define GPS_TX_PIN 4  // Broche TX du module GPS connectée à la broche 2 de l'Arduino
// #define GPS_RX_PIN 3  // Broche RX du module GPS connectée à la broche 3 de l'Arduino

// SoftwareSerial gpsSerial(GPS_TX_PIN, GPS_RX_PIN);  // Crée un objet SoftwareSerial pour communiquer avec le module GPS

// void setup() {
//   Serial.begin(9600);     // Initialise le port série pour la communication avec le moniteur série
//   gpsSerial.begin(9600);  // Initialise le port série pour la communication avec le module GPS
// }

// void loop() {
//   // Vérifie si des données sont disponibles sur le port série du module GPS
//   if (gpsSerial.available() > 0) {
//     String data = gpsSerial.readStringUntil('\n');  // Lit une ligne de données du module GPS
//     // Serial.println(data);
//     if (data.startsWith("$GPGLL")) {                // Vérifie si la trame est une trame GLL (Donnée de Longitude et de Latitude)
//       // Découpe la ligne de données en champs séparés par des virgules
//       int index = 0;
//       String fieldsGLL[15];  // Nombre de champs dans une trame GGA
//       int start = 0;
//       int end = 0;
//       while ((end = data.indexOf(',', start)) != -1) {
//         fieldsGLL[index++] = data.substring(start, end);
//         start = end + 1;
//       }
//       fieldsGLL[index] = data.substring(start);

//       // Affiche la latitude, la longitude et le nombre de satellites en vue sur le terminal série
//       Serial.print("Latitude: ");
//       Serial.println(fieldsGLL[2]+fieldsGLL[3]);
//       Serial.print("Longitude: ");
//       Serial.println(fieldsGLL[4]+fieldsGLL[5]);
//     }

//     if (data.startsWith("$GPGSV")) {  // Vérifie si la trame est une trame GSV (nombre de satelite visible)
//       // Découpe la ligne de données en champs séparés par des virgules
//       int index = 0;
//       String fieldsGSV[15];  // Nombre de champs dans une trame GGA
//       int start = 0;
//       int end = 0;
//       while ((end = data.indexOf(',', start)) != -1) {
//         fieldsGSV[index++] = data.substring(start, end);
//         start = end + 1;
//       }
//       fieldsGSV[index] = data.substring(start);
//       Serial.print("Satellites en vue: ");
//       Serial.println(fieldsGSV[4]);
//     }
//   }
// }

// Deuxieme partie ----------------------------------------------------------------------------------------------------------------------------------------------

void setup() {
}

void loop() {
}