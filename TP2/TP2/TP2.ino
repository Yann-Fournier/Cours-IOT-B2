#include <Wire.h>           // Wire library - used for I2C communication
int ADXL345 = 0x53;         // The ADXL345 sensor I2C address
int DEVID_REG_ADDR = 0x00;  // Adresse du registre DEVID
float X_out, Y_out, Z_out;  // Outputs
int DIVIDE_OUT;

void setup() {
  Serial.begin(9600);  // Initiate serial communication for printing the results on the Serial monitor
  while (Serial.available() != 0) {
  }
  Serial.println("Start");
  Wire.begin();                     // Initiate the Wire library // Set ADXL345 in measuring mode
  Wire.beginTransmission(ADXL345);  // Start communicating with the device
  Wire.write(0x2D);                 // Access/ talk to POWER_CTL Register - 0x2D // Enable measurement
  Wire.write(8);                    // (8dec -> 0000 1000 binary) Bit D3 High for measuring enable
  Wire.endTransmission();
  delay(10);
}
void loop() {  // === Read acceleromter data === //

  // Q3 et Q4 ------------------------------------------------------------------------------------------------------
  // Wire.beginTransmission(ADXL345);
  // Wire.write(0x32);  // Start with register 0x32 (ACCEL_XOUT_H)
  // Wire.endTransmission(false);
  // Wire.requestFrom(ADXL345, 6, true);        // Read 6 registers total, each axis value is stored in 2 registers
  // X_out = (Wire.read() | Wire.read() << 8);  // X-axis value
  // X_out = X_out / 256;                       //For a range of +-2g, we need to divide the raw values by 256, according to the datasheet
  // Y_out = (Wire.read() | Wire.read() << 8);  // Y-axis value
  // Y_out = Y_out / 256;

  // Z_out = (Wire.read() | Wire.read() << 8);  // Z-axis value
  // Z_out = Z_out / 256;
  // Serial.print("Xa= ");
  // Serial.print(X_out);
  // Serial.print(" Ya= ");
  // Serial.print(Y_out);
  // Serial.print(" Za= ");
  // Serial.println(Z_out);

  // Q5 -----------------------------------------------------------------------------------------------------
  // Wire.beginTransmission(ADXL345);
  // Wire.write(0x00);  // Registre DEVID
  // Wire.endTransmission(false);
  // Wire.requestFrom(ADXL345, 1);
  // DIVIDE_OUT = Wire.read();
  // Serial.print("DEVID = ");
  // Serial.println(DIVIDE_OUT);
}

// Q6 --------------------------------------------------------------------------------------------
int Read_REG(int adresse_composant, int adresse_registre) {
  Wire.beginTransmission(adresse_composant);  // Démarre la transmission avec l'ADXL345
  Wire.write(adresse_registre);               // Sélectionne le registre dans lequel écrire
  Wire.endTransmission(false);                // Termine la transmission
  Wire.requestFrom(adresse_composant, 1);     // Demande 1 octet de données à l'ADXL345
  if (Wire.available()) {
    int valeur_registre = Wire.read();  // Lit le registre DEVID
    return valeur_registre;             // Retouner la valeur
  }
}

void Write_REG(int adresse_composant, int adresse_registre, int octet) {
  Wire.beginTransmission(adresse_composant);  // Démarre la transmission avec l'ADXL345
  Wire.write(adresse_registre);               // Sélectionne le registre dans lequel écrire
  Wire.write(octet);                          // Ecrit la valeur dans le registre
  Wire.endTransmission(false);                // Termine la transmission
  Serial.println("Valeur écrite dans le registre avec succès!");
}
