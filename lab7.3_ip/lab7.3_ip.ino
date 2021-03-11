#include<LiquidCrystal.h>
#include<EEPROM.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int j=1;
unsigned int i=0;
int countReset=-1;
unsigned int ip;
String input[14]; 
String inputR;
void setup(){

  lcd.begin(16,2);
  Serial.begin(9600);
  //countReset = EEPROM.read(2);
  Serial.println("-------Set your ip-------");
  //Serial.print("Reset:");
  //Serial.print(countReset);
  //++countReset;
  //Serial.println();
  //EEPROM.write(2,countReset);
  // Serial.println(EEPROM.read(3));
  Serial.print(EEPROM.read(1));
  Serial.print(".");
  Serial.print(EEPROM.read(2));
  Serial.print(".");
  Serial.print(EEPROM.read(3));
  Serial.print(".");
  Serial.print(EEPROM.read(4));
  Serial.println();
  lcdprint();
}
void loop(){
  while(Serial.available()>0){
    ip  = Serial.parseInt();
    EEPROM.write(j,ip);
    //Serial.println(EEPROM.read(j));
    j++;
    //inputR  = (EEPROM.read(3));
    //Serial.println(inputR);
  }
  lcd.setCursor(0,1);
  lcdprint();
}
void lcdprint(){
  lcd.print(EEPROM.read(1));
  lcd.print(".");
  lcd.print(EEPROM.read(2));
  lcd.print(".");
  lcd.print(EEPROM.read(3));
  lcd.print(".");
  lcd.print(EEPROM.read(4));
  lcd.println();
}
