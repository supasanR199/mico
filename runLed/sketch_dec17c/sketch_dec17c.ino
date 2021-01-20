void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600); 
}
void displayLed() {
  for(int i=13;i>9;i--){
    digitalWrite(i,HIGH);
    delay(1000);
    }
}
void displayOffLed() {
  for(int i=13;i>9;i--){
    digitalWrite(i,LOW);
    delay(500);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(digitalRead(3));
  Serial.println(digitalRead(2));
    if(digitalRead(2)==1){
      displayLed();
      displayOffLed();
    }
    else if(digitalRead(3)==1){
      for(int i=10;i<14;i++){
        digitalWrite(i,HIGH);
        delay(1000);
      }
      for(int i=10;i<14;i++){
        digitalWrite(i,LOW);
        delay(500);
    }
       
    }
}
