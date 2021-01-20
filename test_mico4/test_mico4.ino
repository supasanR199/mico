#define swl 12
#define swr 13
unsigned  int x = 0,i = 0,a,b,c;
int releaseTime,j = 0;
int releaseTime2;
int steP  = 0;
unsigned  long  pressTime,previous  = 0;
unsigned  long  pressTime2,previous2  = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=2;i<10;i++)
    pinMode(i,OUTPUT);
  pinMode(swl,INPUT);
  pinMode(swr,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch(steP){
    case  0:
      Serial.println("Round 1");
      x = 0;
      while(steP  ==  0)
        switch1();
      break;
    case  1:
        a = x;
        x = 0;
        i = 0;
        display();
        Serial.print("A = ");
        Serial.print(a,BIN);
        Serial.println("Round 2");
        while(steP  ==  1)
          switch1();
        break;
    case  2:
        b = x;
        x = 0;
        i = 0;
        display();
        Serial.print("B = ");
        Serial.print(b,BIN);
        Serial.println("cal");
        while(steP  ==  2)
          switch1();
        break;
    case  3:
        if(x  ==  0)
          x = a * b;
        else
          x = a / b;
        c = x;
        i = 0;
        display();
        Serial.println("answer");
        Serial.print("A = ");Serial.println(a,BIN);
        Serial.print("B = ");Serial.println(b,BIN);
        Serial.print("C = ");Serial.println(c,DEC);
        x = 0;
        steP  = 0;
        break;
    }
}
void  switch1() {
  releaseTime = 0;
  if(digitalRead(swl)==0){
    pressTime = millis();
    while(digitalRead(swl)==0){
      if(millis() - previous  >=  1000){
        previous  = millis();
        Serial.println(j++);
        }
      }
    releaseTime = millis()  - pressTime;
    pressTime = 0;
    j = 0;
    Serial.println(releaseTime);
  }
  if(releaseTime  !=  0){
    if(releaseTime  < 3000){
      x = x <<  1;
      x = x & 0xFE;
      display();
      Serial.print("x = ");
      Serial.print(x,BIN);
      Serial.println("  bin "+String(++i));
      }
    if(releaseTime  >= 3000){
      x = x <<  1;
      x = x | 0x01;
      display();
      Serial.print("x = ");
      Serial.print(x,BIN);
      Serial.println("  bin "+String(++i));
      }
    }
//===============================switch2============================//
 releaseTime2 = 0;
  if(digitalRead(swr)==0){
    pressTime = millis();
    while(digitalRead(swr)==0){
      if(millis() - previous2  >=  1000){
        previous  = millis();
        Serial.println(j++);
        }
      }
    releaseTime2 = millis()  - pressTime2;
    pressTime2 = 0;
    j = 0;
    Serial.println(releaseTime2);
  }
  if(releaseTime2  !=  0){
    if(releaseTime2  < 3000){
      x = x >>  1;
      display();
      Serial.print("x = ");
      Serial.print(x,BIN);
      Serial.println("  bin "+String(--i));
      }
    if(releaseTime2  >= 3000){
      steP++;
      return(0);
      }
    }
}
void  display(){
  unsigned  int z;
  unsigned  int y = 1;
  for(int i=9;i>1;i--){
    z = x & y;
    if(z  !=  0){
      digitalWrite(i,HIGH);
      }
    else{
      digitalWrite(i,LOW);
      }
    y *=  2;
    }
  }
