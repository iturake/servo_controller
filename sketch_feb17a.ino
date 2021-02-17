int pot_pin   = A0;
int pot_value = 0;

#include <Servo.h> 
Servo myservo;

void setup() {
  myservo.attach(9);
  myservo.writeMicroseconds(1000); 
  Serial.begin(9600);
}

void loop() {
  pot_value = analogRead(pot_pin);
  Serial.println(pot_value);
  map(pot_value, 0, 1023, 1000, 1208);
  myservo.writeMicroseconds(pot_value); 
  delay(15);
}
