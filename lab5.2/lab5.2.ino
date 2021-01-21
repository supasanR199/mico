int pwm_wave  = 5;
int aVal;
int unsigned long  presstime,previostime;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pwm_wave,OUTPUT);
  pinMode(13,INPUT);
  pinMode(12,INPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(13)==1){
    while(digitalRead(13)==1){
        aVal  = (aVal ==  1023) ? aVal  = 1023  : ++aVal;
        Serial.println(aVal/4,DEC);
        analogWrite(pwm_wave,aVal/4);
      }
    delay(200);
    }
   if(digitalRead(12)==1){
    while(digitalRead(12)==1){
        aVal  = (aVal ==  0) ? aVal  = 0  : --aVal;
        Serial.println(aVal/4,DEC);
        analogWrite(pwm_wave,aVal/4);
      }
    delay(200);
    }

}
