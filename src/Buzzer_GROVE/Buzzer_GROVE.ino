/*
    ** Buzzer module Grove **
       PIN 7 Module shield GROVE
       Bruit buzzer on/off 1s.
*/

void setup(){
  pinMode(7, OUTPUT);
}
 
void loop(){
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
}
