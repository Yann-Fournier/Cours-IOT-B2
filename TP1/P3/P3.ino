#include <Servo.h>

Servo myservo1;
Servo myservo2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo1.attach(10);
  myservo2.attach(11);  
}

void loop() {
  // put your main code here, to run repeatedly:
  // val = analogRead()

  // 1) Faire tourner le servo dans un sens puis dans l'autre -----------------------------------------------------------------------------------------------------------------
  
  // myservo.write(0);                  // sets the servo position according to the scaled value
  // delay(1000);
  // myservo.write(180);                  // sets the servo position according to the scaled value
  // delay(1000);

  // 2)  Faire tourner le Servo sur le pin 11 quand le Joystick est sur l'Axe X et 
  //     faire tourner le Servo sur le pin 10 quand le Joystick est sur l'Axe Y -----------------------------------------------------------------------------------------------------
  
  // int valA0 = analogRead(A0); // Axe X
  // int valA1 = analogRead(A1); // AxeY           // reads the value of the potentiometer (value between 0 and 1023)

  // if (valA0 < 450 || valA0 > 600) {
  //   myservo1.write(0);                  // sets the servo position according to the scaled value
  //   delay(100);
  //   myservo1.write(180);                  // sets the servo position according to the scaled value
  //   delay(100); 
  // }

  // if (valA1 < 500 || valA1 > 550) {
  //   myservo2.write(0);                  // sets the servo position according to the scaled value
  //   delay(100);
  //   myservo2.write(180);                  // sets the servo position according to the scaled value
  //   delay(100); 
  // }  
}
