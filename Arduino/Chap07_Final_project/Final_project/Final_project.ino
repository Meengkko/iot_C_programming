#include <LiquidCrystal.h>
#include "dht11.h"
dht11 DHT11;
#define DHT11PIN 13
#define ALERT_SIGN 11
#define CEL_SWITCH 8
#define FAH_SWITCH 7
#define HUM_SWITCH 6
int modeSelection;

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

double Fahrenheit(double celsius)
{
  return 1.8 * celsius + 32;
}

void AlertSignal(int nBlink){
  for(int i = 0; i < nBlink; i++){ 
      digitalWrite(ALERT_SIGN, HIGH);
      delay(50);
      digitalWrite(ALERT_SIGN, LOW);
      delay(50);
    }
}

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print(" <Thermometer>");
  lcd.setCursor(0, 1);
  lcd.print(" 1CEL 2FAH 3HUM");
  pinMode(ALERT_SIGN, OUTPUT);
  pinMode(CEL_SWITCH, INPUT);
  pinMode(FAH_SWITCH, INPUT);
  pinMode(HUM_SWITCH, INPUT);
}

void loop() {
  
  int chk = DHT11.read(DHT11PIN);

  if(digitalRead(CEL_SWITCH) == HIGH){
    modeSelection = 1;
  }else if(digitalRead(FAH_SWITCH) == HIGH){
    modeSelection = 2;
  }else if(digitalRead(HUM_SWITCH) == HIGH){
    modeSelection = 3;
  }
  
  Serial.print("Read sensor: ");
  switch (chk)
  {
    case DHTLIB_OK: 
    Serial.println("OK"); 
    break;
    case DHTLIB_ERROR_CHECKSUM: 
    Serial.println("Checksum error"); 
    break;
    case DHTLIB_ERROR_TIMEOUT: 
    Serial.println("Time out error"); 
    break;
    default: 
    Serial.println("Unknown error"); 
    break;
  }

  switch(modeSelection){
  case 1:
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Celsius");
  lcd.setCursor(0, 1);
  lcd.print((float)DHT11.temperature, 2);
  lcd.print(" oC");
  break;

  case 2:
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fahrenheit");
  lcd.setCursor(0, 1);
  lcd.print(Fahrenheit(DHT11.temperature), 2);
  lcd.print(" oF");
  break;

  case 3:
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidity");
  lcd.setCursor(0, 1);
  lcd.print((float)DHT11.humidity, 2);
  lcd.print("%");
  break;
  }

  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Temperature (°C): ");
  Serial.println((float)DHT11.temperature, 2);

  Serial.print("Temperature (°F): ");
  Serial.println(Fahrenheit(DHT11.temperature), 2);

  if(DHT11.temperature > 35){
    AlertSignal(10);
  }else if(DHT11.temperature > 29){ // 32도 폭염주의보
    AlertSignal(5);
  }

  delay(2000);
}
