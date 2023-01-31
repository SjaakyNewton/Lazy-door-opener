#include <Arduino.h>


/// TODO: These are global, don't want them global....
int motor_A0 = DD4;
int motor_A1 = DD5;
int button = DD7;
int led = DD3;
int turn_time = 1000;
int button_delay_check = 2000;

void setup(){
  pinMode(motor_A0, OUTPUT);
  pinMode(motor_A1, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  if(digitalRead(button)){
      digitalWrite(led, HIGH);
      digitalWrite(motor_A0, HIGH);
      digitalWrite(motor_A1, LOW);
      /// TODO: Need to check if this is long enough
      delay(turn_time);
      digitalWrite(led, LOW);
      digitalWrite(motor_A0, LOW);
      digitalWrite(motor_A1, HIGH);
      // TODO: Can I turn the motor back? Will it not break when pushing the door back?
      delay(turn_time);
      digitalWrite(motor_A0, LOW);
      digitalWrite(motor_A1, LOW);
  }
  else{
      // Is this to long? Probably not, right? Haha
      delay(button_delay_check);
  }
}