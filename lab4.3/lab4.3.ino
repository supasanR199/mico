#define timeInterval 3000
#define sw  2
#define green_led 13
#define red_led 12
int red = 0,green = 0,count=1;
int unsigned  long  pressTime,releaseTime,previous;
void setup() {
  // put your setup code here, to run once:
   for(int i=12;i<=13;i++)
    pinMode(i,OUTPUT);
  Serial.begin(9600);
  pinMode(sw,INPUT);

}

void loop() {
  releaseTime = 0;
  if(digitalRead(sw)  ==  0){
    pressTime = millis();
    while(digitalRead(sw)==0){
      if(millis()-previous >= 1000){
          previous  = millis();
          Serial.println(count++);
          }
        }
    releaseTime  = millis()  - pressTime;
    count = 1;
    pressTime = 0;
    }
  if(releaseTime  !=  0){
    if(releaseTime  >=  timeInterval){
      green = ~green;
      digitalWrite(green_led,green);
      Serial.println("Long press detect");
      }
      if(releaseTime  < timeInterval){
        red = ~red;
        digitalWrite(red_led,red);
        Serial.println("Shot press detect");
       }
       //releaseTime = 0;
       //Serial.println(releaseTime);      
   }
 
}
