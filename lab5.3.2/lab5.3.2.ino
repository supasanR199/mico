int statusLed;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  Serial.println(((analogRead(A0)/4)-255)*-1);
  // put your main code here, to run repeatedly:
  analogWrite(5,((analogRead(A0)/4)-255)*-1);

}
