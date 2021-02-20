#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
String inputSerial;
uint8_t n0[8] = { 
  0x00,
  0x00,
  0x00,
  0x18,
  0x14,
  0x12,
  0x11,
  0x1F
   };
uint8_t n1[8]  = {
 0x00,
  0x00,
  0x00,
  0x1F,
  0x10,
  0x10,
  0x10,
  0x1F
  };
uint8_t n2[8]={
 0x1F,
  0x1F,
  0x0E,
  0x04,
  0x00,
  0x00,
  0x00,
  0x00
  };
 uint8_t n3[8]={ 
   0x1F,
  0x1F,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00
  };
 uint8_t n4[8]={
  0x1F,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00
  };
uint8_t n5[8]={ 
  0x0E,
  0x04,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00
  };
uint8_t n6[8]  = {
   0x1F,
  0x04,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00
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
  lcd.setCursor(0,0);
  //for(int i=2;i>=0;i--){
   //lcd.print((char)i);
  //}
  //lcd.setCursor(12,1);
  //for(int i=3;i<=5;i++){
   //lcd.print((char)i);
  //}
  lcd.print((char)1);
  lcd.print((char)1);
  lcd.print((char)1);
  lcd.print((char)0);
  lcd.setCursor(0,1);
  lcd.print((char)2);
  lcd.print((char)3);
  lcd.print((char)3);
  lcd.print((char)2);
}

void loop()
{
   
}
