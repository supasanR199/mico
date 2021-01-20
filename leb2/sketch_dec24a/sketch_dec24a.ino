int inputByte;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    inputByte = Serial.read();
    Serial.println(inputByte);
    switch(inputByte){
      case 49:
        digitalWrite(13,1);
        break;
      case  50:
        digitalWrite(13,0);
        break;
      default:
        Serial.println("Press 1 or 2!!!");
        break;
        }
    }
}
