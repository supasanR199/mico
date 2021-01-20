int binaryNum[32];
int binaryNum2[32];
int count = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for(int i=2;i<=10;i++){
    pinMode(i,OUTPUT);
    }
  for(int i=12;i<=13;i++){
    pinMode(i,INPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(count%2  !=  0){
    for(int i=0;i<=15;i++){ 
      decToBinary(i);
      ledBin1();
      Serial.print((i-15)*(-1));
      decToBinary2((i-15)*(-1));
      ledBin2(count);
      clearArray();
      delay(1000);
      }
    ledOff();
    delay(1000);
    }
  else{
    for(int i=0;i<=15;i++){
      Serial.print(i); 
      decToBinary(i);
      ledBin1();
      ledBin2(count);
      delay(1000);
    }
    ledOff();
    delay(1000);
  }
  count++;
  
}
void decToBinary(int n) 
{ 
    // array to store binary number  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2;
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
//    for (int j = i - 1; j >= 0; j--) 
//       Serial.print(binaryNum[j]); 
}
void decToBinary2(int n) 
{ 
    // array to store binary number  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum2[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
//    for (int j = i - 1; j >= 0; j--) 
//       Serial.print(binaryNum[j]); 
}
void ledBin1(){
  for(int i=6;i<=9;i++){
    digitalWrite(i,binaryNum[i-6]);}
  }
void ledBin2(int count){
  if(count%2  !=  0){
    for(int i=2;i<=5;i++){
      delay(10);
      digitalWrite(i,binaryNum2[(i-2)]);}
    }
   else{
     for(int i=2;i<=5;i++){
       digitalWrite(i,binaryNum[(i-2)]);}
      }
  }
void ledOff(){
  for(int j=0;j<=31;j++){
    binaryNum[j]  = 0;
    binaryNum2[j] = 0;}
  for(int i=6;i<=9;i++){
    digitalWrite(i,LOW);
    }
}
void  clearArray(){
   for(int j=0;j<=32;j++){
    binaryNum2[j] = 0;}
  }
