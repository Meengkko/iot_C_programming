int pins[] = {2,3,4,5,6,7,8,9,10};
int notes[3][7] = {
  {262, 294, 330, 349, 392, 440, 494},
  {523, 587, 659, 698, 784, 880, 988},
  {1047, 1175, 1319, 1397, 1568, 1760, 1976}
  };

int pitch = 0;

void setup() {
  
  for(int i=0; i<9; i++){
    pinMode(pins[i], INPUT);
  }
}

void loop() {

  if(digitalRead(pins[7]) == HIGH && digitalRead(pins[8]) == LOW){
      melodyOn(0);
  }else if(digitalRead(pins[7]) == LOW && digitalRead(pins[8]) == HIGH){
      melodyOn(2);
  }else if(digitalRead(pins[7]) == LOW && digitalRead(pins[8]) == LOW){
      melodyOn(1);  
  }

}

void melodyOn(int notePitch){

    int melody;
  
    for(melody = 0; melody < 7; melody++){
      if(digitalRead(pins[melody]) == HIGH){
         tone(12, notes[notePitch][melody], 50);
         tone(13, notes[notePitch][melody], 50);
     }
   }
}
