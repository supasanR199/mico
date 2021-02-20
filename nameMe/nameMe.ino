#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
String inputSerial;
uint8_t n0[8] = { 
  0x01,
  0x02,
  0x1E,
  0x12,
  0x1A,
  0x12,
  0x0C,
  0x04
   };
uint8_t n1[8]  = {
   0x00,
  0x00,
  0x00,
  0x1F,
  0x09,
  0x09,
  0x09,
  0x19
  };
uint8_t n2[8]={
 0x10,
  0x1D,
  0x01,
  0x0F,
  0x11,
  0x0F,
  0x11,
  0x19
  };
 uint8_t n3[8]={ 
   0x00,
  0x00,
  0x00,
  0x1D,
  0x15,
  0x15,
  0x1D,
  0x1F
  };
 uint8_t n4[8]={
  0x01,
  0x02,
  0x04,
  0x00,
  0x1B,
  0x1B,
  0x0D,
  0x09
  };
uint8_t n5[8]={ 
  0x04,
  0x04,
  0x1F,
  0x1E,
  0x02,
  0x02,
  0x06,
  0x06
  };
uint8_t n6[8]  = {
  0x00,
  0x00,
  0x19,
  0x19,
  0x09,
  0x09,
  0x1F,
  0x19
  };
uint8_t n7[8]  = {
  0x00,
  0x00,
  0x00,
  0x17,
  0x15,
  0x15,
  0x15,
  0x1D
  };
uint8_t n8[8]  = {
  0x00,
  0x00,
  0x12,
  0x12,
  0x17,
  0x12,
  0x12,
  0x1E
  };

 
int state  = 0;
int beforState  = 0;
void setup()
{
  lcd.begin(16,1);
  lcd.begin(16,2);
  lcd.createChar(0, n0);
  lcd.createChar(1, n1);
  lcd.createChar(2, n2);
  lcd.createChar(3, n3);
  lcd.createChar(4, n4);
  lcd.createChar(5, n5);
  lcd.createChar(6, n6);
  lcd.createChar(7, n7);
  //lcd.createChar(8, n8);
  lcd.setCursor(0,0);
  for(int i=0;i<=7;i++){
   lcd.print((char)i);
  }
  //lcd.print("   ");
  //for(int i=5;i<=9;i++){
   //lcd.print((char)i);
  //}
  //lcd.setCursor(0,1);
  //lcd.print("ComputerEngineerRajamangala U.TH");
}

void loop()
{
   
}
