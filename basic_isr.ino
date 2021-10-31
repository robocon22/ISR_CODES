volatile boolean led=false;                           //Defining the state of the led as global volatile variable 

void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  attachInterrupt(0,led_on_off,RISING);              //assigning the interrupt service routine for the interrupt pin2 = 0 at the rising of the pulse
}

void loop() {
  
}

// changing the state of led according to the interrupt

void led_on_off()
{
  if(led)
  {
    led=false;
    digitalWrite(13,LOW);
  }
  else
  {
    led=true;
    digitalWrite(13,HIGH);
  }
}
