int num[] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
void setup() {
  // put your setup code here, to run once:
  DDRD = 0xFF; // เซ็ตให้ขา 0 - 7 เป็นเอาต์พุต
  //PORTD = 0xF9; // เซ็ตให้แสดงค่า 0xF9 ออกไป (แสดงเลข 1 ใน 7 Segment Comon Anode)
  //pinMode(4,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(4,HIGH);
  for(int i = 1;i<=9;i++){
    delay(1000);
  PORTD = num[i];}
}
