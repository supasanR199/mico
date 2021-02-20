#include<EEPROM.h>
#define START_ADDR 10
#define END_ADDR 30
#define DATA 0xFF
#define MAX_READ 255
#define ITEM_PER_LINE 16
String addZero = "0";
String dataString;
int  countLine = 0;
void setup(){
  int count=1;
    Serial.begin(9600);
    Serial.println();
  Serial.println("----EEPROM.write----");
    for(int i=START_ADDR;i<END_ADDR;i++)
      EEPROM.write(i,DATA);
    Serial.println("Done");
    Serial.println("----EEPROM.read----");
    for(int i=0;i<=15;i++){
        if(i<=9)
          Serial.print("0"+String(i));
        else
          Serial.print(i);
        Serial.print(" ");
      }
    Serial.println();
    for(int i=0;i<=23;i++)
      Serial.print("--");
    Serial.println();
    for(int i=0;i<MAX_READ;i++){
      int data = EEPROM.read(i);
      if(data<=9){
        dataString = String(data,HEX)+addZero;
      }
      else{
        dataString  = String(data,HEX);
      }
      Serial.print(dataString);
      Serial.print(" ");
      if((count++%ITEM_PER_LINE)==0){
          countLine++;
          Serial.print("|");
           if(count<=9){
            dataString = String(countLine)+addZero;
        }
          else{
            dataString  = String(countLine);
          }
          Serial.println(countLine);
          Serial.println();
      }
    }
} 
void loop(){}
