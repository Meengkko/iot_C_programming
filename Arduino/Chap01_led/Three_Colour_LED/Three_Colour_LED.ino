#define RED 11
#define GREEN 10
#define BLUE 9
#define RED_BUTTON 4
#define GREEN_BUTTON 3
#define BLUE_BUTTON 2

int r = 0, g = 0, b = 0;

void setup() {
  pinMode(RED_BUTTON, INPUT);
  pinMode(GREEN_BUTTON, INPUT);
  pinMode(BLUE_BUTTON, INPUT);
}

void loop() {
  if(digitalRead(RED_BUTTON) == HIGH){
    r = random(0, 50);
  }

  if(digitalRead(GREEN_BUTTON) == HIGH){
    g = random(0, 50);
  }
  
  if(digitalRead(BLUE_BUTTON) == HIGH){
    b = random(0, 50);
  }

  analogWrite(RED, r);
  analogWrite(GREEN, g);
  analogWrite(BLUE, b);
  delay(100);
}
