void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int val = analogRead(A0);
  analogWrite(8, map(val, 0, 1024, 0, 255));
}
