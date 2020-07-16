 int Red = 9;
 int Green = 10;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(2000);

  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(2000);
}
