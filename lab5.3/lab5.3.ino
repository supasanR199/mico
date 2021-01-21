int statusLed;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  Serial.println(analogRead(A0));
  // put your main code here, to run repeatedly:
  statusLed = (analogRead(A0)>1000) ? statusLed = 1 : statusLed = 0;
  digitalWrite(5,statusLed);

}
