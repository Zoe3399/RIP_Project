#include <Servo.h> // 서보모터 라이브러리 사용
Servo servo;  // 서보모터 객체를 myservo로 생성
void setup()
{
 servo.attach(7);  // 서보모터 7번핀에 연결
}
void loop()
{    
    servo.write(180); // 역방향으로 최고속도 회전
    delay(2000); // 2초 동작
    servo.write(92); // 정지
    delay(500);  // 0.5초 동작
    servo.write(0);  // 정방향으로 최고속도 회전
    delay(2000); // 2초동작
    servo.write(92); // 정지
    delay(500);  // 0.5초 동작        
}
