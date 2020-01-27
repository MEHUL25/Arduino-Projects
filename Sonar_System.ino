#include<Servo.h>




//Ultrasonic Sensor 
// PINS : GND,VCC,ECHO,TRIGGER
int trig=2,echo=3,led=13;
int t,s,c=0;
int i=0,j=0;
Servo ser;
//Attach Signal terminal to ~9 and power to vcc
void setup()
{
  ser.attach(9);
  Serial.begin(9600);
    pinMode(trig,OUTPUT);
    pinMode(echo,INPUT);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop()
{
  for(int i=0;i<=179;i++)
  {
     ser.write(i);
     digitalWrite(trig,HIGH);
    delay(100);
    digitalWrite(trig,LOW);
    t=pulseIn(echo,HIGH);
    s=(0.034*t)/2;
    delay(100);
    if(s<=15)
    {
          Serial.print("Object Detected : ");
          Serial.print(i);
          Serial.println();
    }
    delay(20);
  }
  for(int i=179;i>=0;i--)
  {
     ser.write(i);
     digitalWrite(trig,HIGH);
    delay(100);
    digitalWrite(trig,LOW);
    t=pulseIn(echo,HIGH);
    s=(0.034*t)/2;
    delay(100);
    if(s<=15)
    {
          Serial.print("Object Detected : ");
          Serial.print(i);
          Serial.println();
    }
    delay(20);
  }
  delay(200);
}
