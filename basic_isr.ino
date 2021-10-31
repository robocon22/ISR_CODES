volatile boolean led=false;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  attachInterrupt(0,led_on_off,RISING);
}

void loop() {
  
}

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
