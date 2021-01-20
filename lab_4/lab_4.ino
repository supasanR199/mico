#include <ThreadController.h>
#include <StaticThreadController.h>
#include <Thread.h>
void  led1();
void  led2();
void setup() {
  // put your setup code here, to run once:
  for(int i=12;i<=13;i++)
    pinMode(i,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,0);
  digitalWrite(12,0);
  delay(1000);
  digitalWrite(13,1);
  digitalWrite(12,1);
  delay(1000);
  digitalWrite(13,1);
  digitalWrite(12,0);
  delay(1000);
  digitalWrite(13,0);
  digitalWrite(12,1);
  
}
void  led1(){
  digitalWrite(13,1);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  }
void  led2(){
  digitalWrite(12,1);
  delay(2000);
  digitalWrite(12,LOW);
  delay(2000);
  }
