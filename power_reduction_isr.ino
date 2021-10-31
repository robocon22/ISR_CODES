#include "LowPower.h"                         // Install lowpower library from library manager

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);                           // connecting the signal pin a sensor to both pin3, pin4 to take two inputs 
                                              // if the first interrupt is given it the pulse will raise and for the second 
                                              // interrupt the pulse will be falling to do another sub routine
  attachInterrupt(digitalPinToInterrupt(3),led_on,RISING);
  attachInterrupt(digitalPinToInterrupt(4),led_off,FALLING);
 
}

void loop()
{
  LowPower.powerDown(SLEEP_FOREVER,ADC_OFF,BOD_OFF);    //this makes arduino to go into sleep mode until any interrupt occur
}

void led_on()
{
  digitalWrite(13,HIGH);
}
void led_off()
{
  digitalWrite(13,LOW);
}

