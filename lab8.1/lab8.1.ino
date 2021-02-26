int sensorPin  = 0;
void setup(){
  Serial.begin(9600);
}
void loop(){
    int reading = analogRead(sensorPin);
    float voltage = reading * 5.0 / 1024;
    Serial.print(String(voltage)+"Volt:");
    float temperatureC = voltage * 100 - 50;
    Serial.println(String(temperatureC)+"degreesC");
    delay(1000);
}
