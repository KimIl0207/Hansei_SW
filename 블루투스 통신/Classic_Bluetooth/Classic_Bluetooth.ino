#define RED_PIN 4 // 빨간색 핀
#define GREEN_PIN 15 // 초록색 핀
#define BLUE_PIN 2 // 파란색 핀

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  //모든 핀을 HIGH로 설정해서 LED를 꺼진 상태로 초기화
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
}


void loop() {
  // 빨간 빛 내기
  analogWrite(RED_PIN, 0);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 255);
  delay(1000);

  // 초록
  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 0);
  analogWrite(BLUE_PIN, 255);
  delay(1000);

  // 파랑
  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 0);
  delay(1000);

  // 백색
  analogWrite(RED_PIN, 0);
  analogWrite(GREEN_PIN, 0);
  analogWrite(BLUE_PIN, 0);
  delay(1000);
  
  //끄기
  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 255);
  delay(1000);

}