int binaryNum[32];
void setup() {
  // put your setup code here, to run once:
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
  for(int i=0;i<=31;i++){
    decToBinary(i);
    binToLed();
    led1_8();
    delay(500);
    }
  clearArray();

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

void  binToLed()  {
  for(int i=3;i<=8;i++){
    digitalWrite(i,binaryNum[i-3]);
    }
}

void  clearArray()  {
  for(int i=0;i<=31;i++)
    binaryNum[i]  = 0;
}

void led1_8() {
  int timeCount = 2;
  for(int i=0;i<=5;i++){
    if(timeCount  ==  8)
      timeCount =-  2;
    digitalWrite(9,1);
    digitalWrite(2,1);
    delay(1000*(1/timeCount));
    digitalWrite(9,0);
    digitalWrite(2,0);
    delay(1000*(1/timeCount));
    timeCount++;
    }
  }
  
