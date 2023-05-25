#define LED_R 3       // R의 핀 번호 3
#define LED_Y 4       // Y의 핀 번호 4
#define LED_G 5       // G의 핀 번호 5
 
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_R, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_G, OUTPUT);
}
 
void loop() {
  
  for(int i=0;i<10;i++){
      digitalWrite(LED_R, HIGH);     // 빨간 불 켜기
      delay(300);                   
      digitalWrite(LED_R, LOW);
      delay(300);
      }
}
