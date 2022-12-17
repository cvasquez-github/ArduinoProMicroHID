#include "Keyboard.h"

const int Coin1Pin = 8;          
const int Coin2Pin = 9;          

int previousCoin1State = HIGH; 
int previousCoin2State = HIGH; 

void setup() {
  pinMode(Coin1Pin, INPUT_PULLUP);  
  pinMode(Coin2Pin, INPUT_PULLUP);  
  Keyboard.begin();
}

void loop() {
  
  int Coin1State = digitalRead(Coin1Pin);
  if (Coin1State == LOW && previousCoin1State == HIGH) {
    Keyboard.press(99);
    delay(50);
  }
  else if (Coin1State == HIGH && previousCoin1State == LOW) {
    Keyboard.release(99);
    delay(50);
  }
 previousCoin1State = Coin1State;
  
  int Coin2State = digitalRead(Coin2Pin);
  if (Coin2State == LOW && previousCoin2State == HIGH) {
    Keyboard.press(118);
    delay(50);
  }
  else if (Coin2State == HIGH && previousCoin2State == LOW) {
    Keyboard.release(118);
    delay(50);
  }
 previousCoin2State = Coin2State;
}
