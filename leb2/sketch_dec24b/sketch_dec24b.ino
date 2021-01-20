 int inputByte;
 String  inputString;
 void stringToInt(String input);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    inputString = Serial.readString();
    Serial.println(inputString);
    inputString.toLowerCase();
    Serial.println(inputString);
    stringToInt(inputString);
  }
}
void stringToInt(String input){
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
      digitalWrite(13,0);
      break;
    case  2:
      digitalWrite(13,1);
      break;
    default:
      Serial.println("pass on or off!!!");
      break;
    }
  }
