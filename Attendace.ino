//Ultrasonic Sensor 
// PINS : GND,VCC,ECHO,TRIGGER
int trig=2,echo=3,led=13;
int t,s,c=0;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(trig,OUTPUT);
    pinMode(echo,INPUT);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(trig,HIGH);
    delay(1000);
    digitalWrite(trig,LOW);
    t=pulseIn(echo,HIGH);
    s=(0.034*t)/2;
    delay(300);
    if(s<=10)
    {
          c++;
    }
    Serial.print("Attendance : ");
    Serial.println(c);
    delay(300);
}
