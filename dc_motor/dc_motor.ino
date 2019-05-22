void setup() {
  // put your setup code here, to run once:
pinMode(26,OUTPUT);
pinMode(27,OUTPUT);
Serial.begin(115200);
}

void loop() {
digitalWrite(26,LOW);
digitalWrite(27,HIGH);
delay(1000);
digitalWrite(26,LOW);
digitalWrite(27,LOW);
delay(1000);
digitalWrite(26,HIGH);
digitalWrite(27,LOW);
delay(1000);
}
