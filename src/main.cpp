#include <Arduino.h>


/// TODO: These are global, don't want them global....
int motor_A0 = 4;
int motor_A1 = 5;
int button = 7;

void setup(){
  pinMode(button, INPUT);
  pinMode(motor_A0, OUTPUT);
  pinMode(motor_A1, OUTPUT);
}

void loop(){
  if(digitalRead(button)){
      digitalWrite(motor_A0, HIGH);
      digitalWrite(motor_A1, LOW);
      /// TODO: Need to check if this is long enough
      delay(1);
      digitalWrite(motor_A0, LOW);
      digitalWrite(motor_A1, HIGH);
      // TODO: Can I turn the motor back? Will it not break when pushing the door back?

      digitalWrite(motor_A0, LOW);
      digitalWrite(motor_A1, LOW);
  }
  else{
      // Is this to long? Probably not, right? Haha
      delay(2);
  }
}