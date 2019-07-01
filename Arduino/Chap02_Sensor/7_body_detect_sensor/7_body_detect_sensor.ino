
int ledPin = 13;       // ledPin을 13번에 추가
int ledPin2 = 12;     // ledPin2를 12번에 추가
int inputPin = 2;     // inputPin을 2번에 추가
int pirState = LOW;  // 시작은 움직임이 없음을 가정하고 시작
int val = 0;             // 핀의 상태를 판독하기 위한 변수를 선언
void setup() {
pinMode(ledPin, OUTPUT);    //ledPin을 출력모드로
pinMode(ledPin2, OUTPUT);  //ledPin2를 출력모드로
pinMode(inputPin, INPUT);    //inputPin을 입력모드로
Serial.begin(9600);           //시리얼 통신을, 9600속도로 받습니다. ( 숫자 조정은 자유)
}

void loop(){
val = digitalRead(inputPin);    // 입력값을 읽습니다

if (val == HIGH) {             //입력 값이 HIGH면
digitalWrite(ledPin2, LOW);    // ledPin2가 꺼지고
digitalWrite(ledPin, HIGH);     // ledPin이 켜집니다
if (pirState == LOW) {
Serial.println("Hello! Looks good!"); 

pirState = HIGH;  // 출력의 변화가 없으면, 시리얼 모니터에 Hello! Looks good! 이라는 문구가 켜짐을 유지합니다
}
} else {
if (pirState == HIGH){               // 적외선을 띈 물체으 이동변화가 생기면 ,

digitalWrite(ledPin, LOW);        //ledPin을 끄고
digitalWrite(ledPin2, HIGH);     // lefPin2를 킵니다
Serial.println("Bye ! Have a good day~");  
pirState = LOW;      // 출력의 변화가 없으면, 시리얼 모니터에 Bye! Have a good day~ 라는 문구가 켜짐을 유지합니다

}
}
} 
