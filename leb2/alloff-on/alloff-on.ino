int inputByte;
String  inputOnOff;
String  inputLed;
int ledPort;
bool flag = true;
bool flag1  = true;
bool flag2  = true;
int turnOffOn(String input);
int stringToLed(String input);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,1);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  flag = true;
  flag1  = true;
  flag2  = true;
  while(flag2){
    if(Serial.available()>0){
       inputLed  = Serial.readString();
       inputLed.toLowerCase();
       Serial.println( inputLed);
       if(inputLed ==  "allon"  ||  inputLed ==  "alloff"){
         //Serial.println( inputLed);
        if(inputLed ==  "allon" ){
          for(int i=12;i<=13;i++){
            digitalWrite(i,HIGH);
            }
          }
        else  if(inputLed ==  "alloff"){
          for(int j=12;j<=13;j++){
            digitalWrite(j,LOW);
          }
        }
      }
     else{
      Serial.println("exit");
      flag2 = false;
      }
    }
  }
  while(flag){
    if(Serial.available()>0){
      while(flag){
        if(Serial.available()>0){
          inputLed  = Serial.readString();
          stringToLed(inputLed);
          Serial.println( inputLed);
          //Serial.println(stringToLed(inputLed));
        if(stringToLed(inputLed)  ==  0){
          Serial.println("pass red or yellow!!!");
          flag  = true;
          }
        else  if(stringToLed(inputLed)  ==  1){
          flag  = false;
          Serial.println("input status");
            }
          }
        }
      }
    }
   while(flag1){
    if(Serial.available()>0){
      while(flag1){
        if(Serial.available()>0){
         inputOnOff = Serial.readString();
         turnOffOn(inputOnOff);
         Serial.println(inputOnOff);
         if(turnOffOn(inputOnOff) ==  0){
          flag1 = true;
          }
         else if(turnOffOn(inputOnOff) ==  1){
          flag1 = false;
          }
        }
      }
    }  
  }
}
int turnOffOn(String input){
  input.toLowerCase();
  int ch;
  if  (input  ==  "on"){
    ch  = 2;}
  else  if  (input  ==  "off"){
    ch  = 1;}
  else
    ch  = 0;
  switch(ch){
    case  1:
      digitalWrite(ledPort,0);
      return  1;
      break;
    case  2:
      digitalWrite(ledPort,1);
      return  1;
      break;
    default:
      Serial.println("pass on or off!!!");
      return  0;
      break;
    }
  }
int stringToLed(String input){
  input.toLowerCase();
  int ch;
  if  (input  ==  "red"){
    ch  = 1;}
  else  if  (input  ==  "yellow"){
    ch  = 2;}
  else
    ch  = 0;
    switch(ch){
      case  1:
        ledPort = 13;
        return  1;
        break;
      case  2:
        ledPort = 12;
        return  1;
        break;
      default:
        //Serial.println("pass red or yellow!!!");
        return 0;
        break;
    }
  }
