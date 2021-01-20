int ledPosition[] = {9,8,7,6,5,4,3,2};
int pointerPosition1  = 0;
int pointerPosition2  = 1;
int pointerPosition3  = 7;
int timeSw =  1000;
//bool flag = true;
void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<=10;i++)
    pinMode(i,OUTPUT);
  for(int i=13;i<=12;i++)
    pinMode(i,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(12)  ==  1){
    runForever(); 
  }
  else{
    runForever();
    timeSw  = 2000;
    }
}
void ledRunA()  {
//  for(int i=0;i<=7;i++){
//    digitalWrite(ledPosition[pointerPosition3],1);
//    delay(1000);
//    digitalWrite(ledPosition[pointerPosition3],0);
//    pointerPosition3  -=  1;
//  }

    while(true){
      runForever();
      }
}

void  ledRunB()  {
  for(int i=0;i<=3;i++){
    digitalWrite(ledPosition[pointerPosition1],1);
    digitalWrite(ledPosition[pointerPosition2],1);
    delay(1000);
    digitalWrite(ledPosition[pointerPosition1],0);
    digitalWrite(ledPosition[pointerPosition2],0);
    delay(1000);
    pointerPosition1  += 2;
    pointerPosition2  +=  2;
  }
}

void  allOff()  {
  for(int i=2;i<=10;i++)
    digitalWrite(i,LOW);
  }

void  positionLed() {
  
}

void setStart(){
  pointerPosition1  = 0;
  pointerPosition2  = 1;
  pointerPosition3  = 7;
  }

void runForever(){
  // TODO use while-loop and chack if-else for reset pointer positon.:
  if(pointerPosition1 ==  8 ||  pointerPosition2  ==  9){
    pointerPosition1  = 0;
    pointerPosition2  = 1;
  }
  //Serial.println(pointerPosition1);
  //Serial.println(pointerPosition3);
  if( pointerPosition3  == -1){
    pointerPosition3  = 7;
  }
  digitalWrite(ledPosition[pointerPosition3],1);
  delay(timeSw);
  digitalWrite(ledPosition[pointerPosition3],0);
  pointerPosition3  -=  1;
  delay(timeSw);
  digitalWrite(ledPosition[pointerPosition1],1);
  digitalWrite(ledPosition[pointerPosition2],1);
  delay(1000);
  digitalWrite(ledPosition[pointerPosition1],0);
  digitalWrite(ledPosition[pointerPosition2],0);
  delay(1000);
  pointerPosition1  += 2;
  pointerPosition2  +=  2;
    
}
