#define DT 10

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  Serial.begin(9600);  
}

void loop() {
  digitalWrite(2, HIGH);
  Serial.println("first light on");
  delay(DT);
  digitalWrite(2, LOW);
  Serial.println("first light off");
  delay(DT);
  digitalWrite(3, HIGH);
  Serial.println("second light on");
  delay(DT);
  digitalWrite(3, LOW);
  Serial.println("second light off");
  delay(DT);
  digitalWrite(4, HIGH);
  Serial.println("third light on");
  delay(DT);
  digitalWrite(4, LOW);
  Serial.println("third light off");
  delay(DT);
}
