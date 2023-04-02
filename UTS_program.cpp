#include "MQ2.h"
#define pin A0
int lpg, co, smoke;

MQ2 mq2(pin);

void setup(){
  Serial.begin(9600);
  mq2.begin();
}

void loop(){

float* values= mq2.read(true);
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  delay(1000);
}