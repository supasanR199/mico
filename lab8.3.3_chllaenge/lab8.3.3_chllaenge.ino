#define RedLED 10
String inString;
int HTT = 27;
int LTT  = 20;
int sensorPin = 0;
void setup(){
  Serial.begin(9600);
  pinMode(RedLED,HIGH);
}
void loop(){
  while(Serial.available()>0){
    String  inString;
    inString  = Serial.readString();
    inString.toLowerCase();
    if(inString.substring(0,3)=="htt"){
      if(inString.substring(3,inString.length()).toInt()){
        HTT = inString.substring(3,inString.length()).toInt();
      }
      else{
         Serial.println("bad command!!!");
      }
    }
    else if(inString.substring(0,3)=="ltt"){
      if(inString.substring(3,inString.length()).toInt()){
        LTT = inString.substring(3,inString.length()).toInt();
      }
      else{
         Serial.println("bad command!!!");
      }
    }
    else{
      Serial.println("bad command!!!");
    }
  }
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0 /1024;
  float temperatureC = voltage *100 -50;
  Serial.print("Temperature"+String(temperatureC)+"*C-");
  Serial.print("HTT:"+String(HTT)+"*C"+" ");
  Serial.print("LTT:"+String(LTT)+"*C");
  Serial.println("");
  if(temperatureC>=HTT){
    digitalWrite(RedLED,HIGH);
    Serial.print("-Alam!!! Hight Temperature!!:"+String(temperatureC)+"*C");
  }
  else if(temperatureC<=LTT){
    digitalWrite(RedLED,HIGH);
    Serial.print("-Alam!!! LOW Temperature!!:"+String(temperatureC)+"*C");
  }
  else{
    digitalWrite(RedLED,LOW);
  }
  delay(1000);
}
