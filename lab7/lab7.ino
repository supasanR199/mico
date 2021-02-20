#include<EEPROM.h>
#define START_ADDR 10
#define END_ADDR 30
#define DATA 0xFF
#define MAX_READ 255
#define ITEM_PER_LINE 20
void setup(){
  int count=1;
    Serial.begin(9600);
    Serial.println();
  Serial.println("----EEPROM.write----");
    for(int i=START_ADDR;i<END_ADDR;i++)
      EEPROM.write(i,DATA);
    Serial.println("Done");
    Serial.println("----EEPROM.read----");
    for(int i=0;i<MAX_READ;i++){
      int data = EEPROM.read(i);
      Serial.print(data,HEX);
      Serial.print("");
      if((count++%ITEM_PER_LINE)==0)
          Serial.println();  
    }
} 
void loop(){}
