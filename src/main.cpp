#include <Arduino.h>

void setup() {
  bool motor = false;
  bool button = false;
}

void loop() {
  if(button){
      motor = true;
      sleep(2);
      motor = false;
  }
  else{
      sleep(2);
  }
}