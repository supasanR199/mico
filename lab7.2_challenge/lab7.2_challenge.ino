#include<LiquidCrystal.h>
#include<EEPROM.h>
LiquidCrystal lcd(12,11,5,4,3,2);
unsigned int i=0;
int countReset=-1;
void setup(){
  
  lcd.begin(16,2);
  Serial.begin(9600);
  i  = EEPROM.read(1);
  countReset = EEPROM.read(2);
  Serial.println("-------System start-------");
  Serial.print("Reset:");
  Serial.print(countReset);
  ++countReset;
  Serial.println();
  EEPROM.write(2,countReset);
}
void loop(){
  lcd.clear();
  lcd.print("COUNT:");
  lcd.setCursor(6,0);
  if(i<10){
    lcd.print("0");
  }
  lcd.print(i);
  lcd.setCursor(0,1);
  lcd.print("ResetCount:");
  lcd.setCursor(11,1);
  if(countReset<10){
    lcd.print("0");
  }
  lcd.print(countReset-1);
  
  Serial.println(EEPROM.read(1));
  lcd.setCursor(5,1);
  i++;
  EEPROM.write(1,i);
  delay(800);
}
