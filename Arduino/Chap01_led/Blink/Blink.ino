/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
#define DELAY_TIME 200
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  int index_i;
  int index_j;

  for(index_i = 0; index_i <2; index_i++){
   for(index_j = 2; index_j <=6; index_j++){
     if(index_i ==0){
      digitalWrite(index_j, HIGH); 
      delay(DELAY_TIME);
     }else{
      digitalWrite(index_j, LOW); 
      delay(DELAY_TIME);
     }
   }
 }
  for(index_i = 0; index_i <2; index_i++){
   for(index_j = 6; index_j >=2; index_j--){
     if(index_i ==0){
      digitalWrite(index_j, HIGH); 
      delay(DELAY_TIME);
     }else{
      digitalWrite(index_j, LOW); 
      delay(DELAY_TIME);
     }
   }
 }
}
