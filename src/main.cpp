#include <Arduino.h>


/// TODO: These are global, don't want them global....
int motor = 4;
int button = 2;

void setup(){
  pinMode(button,INPUT);
  pinMode(motor, OUTPUT);
}

void loop(){
  if(digitalRead(button)){
      digitalWrite(motor, HIGH);
      /// TODO: Need to check if this is long enough
      delay(1);
      digitalWrite(motor, LOW);
      // TODO: Can I turn the motor back? Will it not break when pushing the door back?
  }
  else{
      // Is this to long? Probably not, right? Haha
      delay(2);
  }
}