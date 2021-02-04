#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
String inputSerial;
int state  = 0;
int beforState  = 0;
void setup()
{
  lcd.begin(16,2);
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    lcd.clear();
    beforState  = state;
    inputSerial = Serial.readString();
    inputSerial.toLowerCase();
    if(inputSerial  ==  "bi-off"){
      digitalWrite(9,0);
      Serial.println("backlight-off");
      lcd.print("backlight-off");
      state = 2;
      if(beforState ==  2){
        lcd.setCursor(0,1);
        lcd.print("All ready off!!!");
        Serial.println("All ready off!!!");
      }
    }
    else if(inputSerial ==  "bi-on"){
      digitalWrite(9,0);
      Serial.println("backlight-on");
      lcd.print("backlight-on");
      state = 1;
      if(beforState ==  1){
        lcd.setCursor(0,1);
        lcd.print("All ready on!!!");
        Serial.println("All ready on!!!");
      }
    }
    else if(inputSerial !=  "bi-on" && inputSerial  !=  "bi-off"){
      Serial.println("not have "+inputSerial+" in command");
    }
  }
    

  
}
