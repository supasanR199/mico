#include<EEPROM.h>
#define START_ADDR 10
#define END_ADDR 30
#define DATA 0xFF
#define MAX_READ 255
#define ITEM_PER_LINE 16
String addZero = "0";
String dataString;
int  countLine=0 ;
int count=1;
int dataArray[16][16];
int test;
void setup(){
    Serial.begin(9600);
    Serial.println();
  Serial.println("----EEPROM.write----");
    for(int i=START_ADDR;i<END_ADDR;i++)
      EEPROM.write(i,DATA);
    Serial.println("Done");
    EEPROM.write(setData(4,7),DATA);
    printData();
    //delay(500);
    Serial.println();
}
    
void loop(){}

int setData(int row,int column){
  Serial.print("test");
  int countTable=0;
  int result;
  for(int i=0;i<=15;i++){
      for(int j=0;j<=15;j++){
        dataArray[i][j]=countTable++;
      }
  }
    result  = dataArray[row][column];
    return result;

}

void printData(){
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
          Serial.print("|");
           if(count<=9){
            dataString = String(countLine)+addZero;
        }
          else{
            dataString  = String(countLine);
          }
          Serial.println(countLine);
          countLine++;
          Serial.println();
      }
    }
} 
