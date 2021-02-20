#include<LiquidCrystal.h>
#include<EEPROM.h>
LiquidCrystal lcd(12,11,5,4,3,2);
unsigned int i=0;
void setup(){
  lcd.begin(16,2);
  Serial.begin(9600);
  i  = EEPROM.read(1);
  Serial.println("-------System start-------");
}
void loop(){
  lcd.clear();
  lcd.setCursor(7,0);
  if(i<10){
    lcd.print('0');
  }
  lcd.print(EEPROM.read(1));
  Serial.println(EEPROM.read(1));
  i++;
  EEPROM.write(1,i);
  delay(800);
}
