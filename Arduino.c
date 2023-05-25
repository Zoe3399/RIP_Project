#include <stdio.h>
#include <Servo.h>
Servo servo;

int main(void){
    //인체 감지 센서 함수 계속해서 실행
    RIP_S();
    // 감지 시 a = 1
    // 미 감지 시 a = 0
    botton_S();
    // 버튼 클릭 시 a = 2

 
    // 인체 감지 센서에 아무것도 인식이 되지 않을때 계속 진행
    if (a==0){
        motor_W('Start');
    }
    // 인체 감지 센서에 인식 되었을 때 작동 중지
    else if (/*a == 인체 감지 센서 호출값 */)
    {
        motor_W('Stop');
        LED_S('Red'); // 인체 감지 시 Red 색상 호출
        Sound_S(1); // Sound 1 호출

        
       prinf("인체가 감지되어 작동을 중지합니다.")
    }
    else if (a == 2)
    {
        motor_W('Stop');
        LED_S('Yellow'); // 버튼 작동 시 Yellow 색상 호출
        Sound_S(2);     // sound 2 호출
        
        print("임의로 작동이 중지되었습니다.")

        /* code */
    }
    
    
    
}

// 모터 반복 실행하는 함수
int motor_W(int b)
{
    Servo servo; //Servo 클래스로 servo 객체 생성
    int value = 0; //각도 조절 변수
    int i = 0; 

void setup(){ servo.attach(7); } //servo 모터가 7번 pin 연결
void loop(){
     for(i = 0; i < 180; i++)
  { servo.write(i); delay(30); }
}

}


// 인체 감지 센서 함수
int RIP_S(void)
{



}

// 버튼 센서
int botton_S(void)
{

}


// LED 센서
int LED_S(void)
{

}

// 소리 센서
int Sound_S(void)
{

}