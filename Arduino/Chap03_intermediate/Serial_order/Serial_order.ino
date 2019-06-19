#include "pitches.h"
#define MILISECOND 100
#define RANDOM_BLINK 1000
#define TRIG 11
#define ECHO 12

int modeSelection = 0;
int breakSign = 0;
int repeats = 0;

void rightMovement(){

  int i_index; 
  int j_index;

  while(1){
    for(j_index = 2; j_index < 7; j_index++){
      digitalWrite(j_index, HIGH);
      delay(MILISECOND);
      digitalWrite(j_index, LOW);
      delay(MILISECOND);
    }
    breakSign = Serial.read();
    if(breakSign == '1'){
      return;
    }
  }
}

void leftMovement(){
 
  int i_index; 
  int j_index;
  
  while(1){
    for(j_index = 6; j_index > 1; j_index--){
      digitalWrite(j_index, HIGH);
      delay(MILISECOND);
      digitalWrite(j_index, LOW);
      delay(MILISECOND);
    }
    breakSign = Serial.read();
    if(breakSign == '2'){
      return;
    }
  }
}

void randomBlink(){
 
  int i_index; 
  int temp;
  
  for(i_index = 0; i_index < RANDOM_BLINK; i_index++){
    if(Serial.available()>0){
        breakSign = Serial.read();
        if(breakSign){
          return;
        }
    }
    temp = ((rand()%5) + 2);
    digitalWrite(temp, HIGH);
    delay(MILISECOND/2);
    digitalWrite(temp, LOW);
    delay(MILISECOND/2);
  }
}

void dontLateForClass(){

  int thisNote = 0;
  
  int fanfare[] = {NOTE_G6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_C6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_C6,NOTE_E6,
                  NOTE_G6,NOTE_E6,NOTE_E6,NOTE_C6,NOTE_C6,NOTE_C6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_C6,NOTE_E6,
                  NOTE_G6,NOTE_E6,NOTE_C6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_E6,NOTE_C6,NOTE_C6,NOTE_C6,NOTE_G6,NOTE_G6,NOTE_E6,NOTE_C6,
                  NOTE_E6,NOTE_C6,NOTE_E6,NOTE_C6,NOTE_E6,NOTE_G6,NOTE_C6,NOTE_C6,NOTE_E6,NOTE_E6,NOTE_G6,NOTE_G6,NOTE_E6,NOTE_C6,
                  NOTE_E6,NOTE_C6,NOTE_E6,NOTE_C6,NOTE_E6,NOTE_G6,NOTE_G6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_G6,NOTE_E6,
                  NOTE_C6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_C6,NOTE_E6,NOTE_G6,NOTE_E6,NOTE_E6,NOTE_C6,NOTE_C6,NOTE_C6};
  
  int noteDurations[] = {4,4,8,8,4,8,8,8,8,8,16,16,8,8
                        ,8,8,4,8,8,4,8,8,4,8,8,8,8,8
                        ,16,16,8,8,8,8,4,8,8,4,8,16,16,8
                        ,8,16,16,16,16,4,8,8,8,8,8,16,16,8
                        ,8,16,16,16,16,4,4,4,8,8,4,8,8,8
                        ,8,8,16,16,8,8,8,8,4,8,8,4};

  for (; thisNote < sizeof(fanfare)/sizeof(int); thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(7, fanfare[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(7);
  }
}

void siren(){
  
  int frequency = 100;
  int count = 0;

  while(1){
    for(;frequency < 1000; frequency += 5){
      digitalWrite(4, HIGH);
      tone(7, frequency, 1000);
      delay(10);
    }
    for(;frequency > 100; frequency -= 5){
      tone(7, frequency, 1000);  
      delay(10);
    }
    noTone(7);
    digitalWrite(4, LOW);
    delay(1000);
    if(Serial.available()>0){
        breakSign = Serial.read();
        if(breakSign){
          return;
        }
    }
  }
}

void distAlarm(int freq){
    digitalWrite(4, HIGH);
    tone(7, 963, freq);
    delay(freq);
    digitalWrite(4, LOW);
    noTone(7);
    delay(freq);
}

void infraredSensor(){

  long distance;
  
  while(1){
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);

    distance = pulseIn(ECHO, HIGH)/58.2;
    
    if(distance < 10){
      distAlarm(50);
    }else if(distance < 20){
      distAlarm(100);
    }else if(distance < 30){
      distAlarm(300);
    }
    
    if(Serial.available()>0){
        breakSign = Serial.read();
        if(breakSign){
          return;
        }
    }
  }  
}

void setup() {

  int index;
  
  Serial.begin(9600);
  for(index = 2; index < 8; index++){
    pinMode(index, OUTPUT);
  }
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  Serial.println("Select the function");
  Serial.println("====================");
  Serial.println("1.Light way");
  Serial.println("2.Left way");
  Serial.println("3.Random Blink");
  Serial.println("4.Morning Fanfare");
  Serial.println("5.Siren");
  Serial.println("6.Distance Alert");
  Serial.println("====================");
}

void loop() {

  if(Serial.available()>0){
    modeSelection = Serial.read();
  }
  
  switch(modeSelection){
  case '1':
    Serial.println("press 1 to stop");
    rightMovement();
    break;
  case '2':
    Serial.println("press 2 to stop");
    leftMovement();
    break;
  case '3':
    Serial.println("press any key to stop");
    randomBlink();
    break;
  case '4':
    dontLateForClass();
    break;
  case '5':
    Serial.println("press any key to stop");
    siren();
    break;
  case '6':
    Serial.println("press any key to stop");
    infraredSensor();
    break;
  }
}
