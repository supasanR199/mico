#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
String inputSerial;
uint8_t duck[8] = { 0x00, 0x0c, 0x1d, 0x0f, 0x0f, 0x06, 0x00, 0x00 };
uint8_t heart[8] = { 0x00, 0x0a, 0x1f, 0x1f, 0x0e, 0x04, 0x00, 0x00 };
uint8_t name[8] = {  0x1F,
  0x11,
  0x01,
  0x19,
  0x19,
  0x11,
  0x11,
  0x1F };
int state  = 0;
int beforState  = 0;
void setup()
{
  lcd.begin(16,2);
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Hello World!!!");
    lcd.createChar(0,duck);
    lcd.createChar(1, heart);
  lcd.createChar(2, name);
  lcd.setCursor(0, 1);
  lcd.print("Com.Engineering.");
  lcd.setCursor(14, 0);
  delay(500);
  lcd.print((char)0);
  delay(500);
  lcd.print((char)2);
}

void loop()
{
   
}
