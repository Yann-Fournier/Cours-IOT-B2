void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  int a0 = analogRead(A0);
  float tensionA0 = a0 * (0.5 / 1023.0) 
  int a1 = analogRead(A1);
  float tensionA1 = a1 * (0.5 / 1023.0)

  Serial.println(tensionA0);
  Serial.println(tensionA1);
}
