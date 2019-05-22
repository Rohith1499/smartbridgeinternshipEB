const int trig = 4;
const int echo=5;
int dur;
int dist;
void setup() {
  // put your setup code here, to run once:

ser.attach(27);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4,LOW);
delay(2);
digitalWrite(4,HIGH);
delay(1000);
digitalWrite(4,LOW);
dur=pulseIn(5,HIGH);
dist=dur*0.034/2;
Serial.println("DISTANCE:");
Serial.println(dist);
