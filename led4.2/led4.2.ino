int ledState  = LOW;
unsigned  long  previousMillis  = 0,previousMillis2;
const long  interval  = 2000;
void setup() {
  // put your setup code here, to run once:
  for(int i=12;i<=13;i++)
    pinMode(i,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned  long  currentMillis = millis();
  if(currentMillis  - previousMillis  >= 1000){
    previousMillis  = currentMillis;
    if(ledState ==  LOW)
      ledState  = HIGH;
    else
      ledState  = LOW;
    digitalWrite(13,ledState);
    }
    if(millis() - previousMillis2  >= 2000){
      previousMillis2 = millis();
    if(ledState ==  LOW)
      ledState  = HIGH;
    else
      ledState  = LOW;
    digitalWrite(12,ledState);
    };
    
    
}
