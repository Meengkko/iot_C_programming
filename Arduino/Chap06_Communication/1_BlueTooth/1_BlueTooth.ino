#include <SoftwareSerial.h>
SoftwareSerial BT_Serial(2, 3); // TX, RX

void setup() {
  Serial.begin(9600);
  BT_Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  if(BT_Serial.available()){
    byte data = BT_Serial.read();
    Serial.write(data);
       
    if(data == '1'){
      digitalWrite(12,HIGH);
    }else if(data == '2'){
      digitalWrite(12,LOW);
    }
  }

  if(Serial.available()){
    BT_Serial.write(Serial.read());
  }
}
