void setup() {
  // put your setup code here, to run once:
  for(int i=13;i<=12;i++)
    pinMode(i,INPUT);
  for(int i=2;i<=10;i++)
    pinMode(i,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print(digitalRead(13));
  if(digitalRead(13)  ==  1){
    Serial.println(statusSw(13));
    digitalWrite(2,LOW);
  }
  else{
    digitalWrite(2,HIGH);
  }
    
}
String statusSw(int inputSw){
  String  i;
  if(digitalRead(inputSw)){
      return  i = "off";
  }
  else{
    return  i = "on";
  }
}
