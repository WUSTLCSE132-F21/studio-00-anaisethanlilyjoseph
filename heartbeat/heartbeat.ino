void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop() {
  delay(1000);
  int time = millis()/1000;
  Serial.println(millis());
  digitalWrite(13, HIGH);
  //Serial.print(time);
  //Serial.println(" sec have elapsed");
  delay(1000);
  digitalWrite(13, LOW);
  time = millis()/1000;
  //Serial.print(time);
  //Serial.println(" sec have elapsed");
  Serial.println(millis());
  
}
