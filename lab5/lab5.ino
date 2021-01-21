int unsigned long presstime,previoustime,releasetime;
int count=1,pointer = -1;
int led[] = {11,10,9,8,7,6,5,4,3,2};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int pin=2;pin<=12;pin++){
    pinMode(pin,OUTPUT);
    }
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  releasetime = 0;
  if(digitalRead(13)==1){
    presstime = millis();
    Serial.println(pointer);
    pointer = (pointer  ==  9)  ? pointer = 9 : ++pointer;  
    digitalWrite(led[pointer-1],0);
    while(digitalRead(13)==1){
        digitalWrite(led[pointer],1);
      }
    delay(200); 
  }
   if(digitalRead(12)==1){
    presstime = millis();
    Serial.println(pointer);
    if(pointer  ==  0)
      pointer = 0;
     else
      --pointer;
    digitalWrite(led[pointer+1],0);
    while(digitalRead(12)==1){
        digitalWrite(led[pointer],1);
      }
    delay(200); 
  }
}
