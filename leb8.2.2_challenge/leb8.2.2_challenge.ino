#define RedLED 10
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int sensorPin  = 0;
void setup(){
  Serial.begin(9600);
    pinMode(RedLED,HIGH);
}
void loop(){
    lcd.clear();
    int reading = analogRead(sensorPin);
    float voltage = reading * 5.0 / 1024;
    Serial.print(String(voltage)+"Volt:");
    float temperatureC = voltage * 100 - 50;
    Serial.print(String(temperatureC)+"*C");
    if(temperatureC>=27){
      digitalWrite(RedLED,HIGH);
        Serial.print("- Alarm!!! Hight Temperature!!:"+String(temperatureC)+"*C");
    }
    if(temperatureC<=20){
      digitalWrite(RedLED,HIGH);
        Serial.print("- Alarm!!! LOW Temperature!!:"+String(temperatureC)+"*C");
    }
    else{
        digitalWrite(RedLED,LOW);
    }
    Serial.println("");
    lcd.print(String(temperatureC)+"*C");
    delay(1000);
}
