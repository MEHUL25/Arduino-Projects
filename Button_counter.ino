//Button connections : pin 1 : Digital Pin 5  , pin no. 2 : VCC
//7 Segment Display has 8 Connections: Digital pins(A,B,C,D,E,F,G),GND(Common) pin.
//DP Pin is Decimal point pin

//ULtrasonic Counter

//        A
//        _
//      F| |B
//        -
//      E|_|C
//        D
int cc=0;
int buttonpin=5;
int buttonstate=0;
int g=13,f=12,e=11,d=10,c=9,b=8,a=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(buttonpin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    buttonstate=digitalRead(buttonpin);
    if(buttonstate==HIGH)
    {
        cc++;
        delay(1000);
    }
    if(cc==0)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
        
    }
    if(cc==1)
    {
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
     }
     if(cc==2)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
    }
    if(cc==3)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
     }
     if(cc==4)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
    }
    if(cc==5)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
     }
     if(cc==6)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    }
    if(cc==7)
    {
          digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
     }
     if(cc==8)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    }
    if(cc==9)
    {
          digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
     }
     if(cc==10)
    {
      cc=0;
    }
}
