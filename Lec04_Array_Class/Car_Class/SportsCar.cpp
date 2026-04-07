#include "Car.h"

// 스포츠카 클래스: 자동차 클래스를 상속받음 
class SportsCar : public Car {
public:
    bool bTurbo; // 터보 장치 상태 

    // 자식 클래스 생성자: 부모 생성자를 명시적으로 호출 
    SportsCar(int s, const char* n, int g) : Car(s, n, g), bTurbo(false) {}

    // 터보 설정 함수 
    void setTurbo(bool bTur) {
        bTurbo = bTur;
    }
 
    void speedUp() {
        if (bTurbo) {
            speed += 20; // 터보가 켜져 있으면 20씩 가속 
            if (speed > 20) gear = 2; // 
        }
        else {
            Car::speedUp(); // 터보가 꺼져 있으면 부모의 기본 가속 호출 
        }
    }
};

int main() {

    // SportsCar 객체 생성
    SportsCar myCar(0, "Porche", 1);

    printf("--- Normal Driving ---\n");
    myCar.speedUp();      // 일반 가속 (+5)
    myCar.display();

    printf("\n--- Turbo Boost On! ---\n");
    myCar.setTurbo(true); // 터보 켜기
    myCar.speedUp();      // 터보 가속 (+20)
    myCar.display();

    printf("\n--- Checking Address ---\n");
    myCar.whereAmI();     // 주소 확인

    return 0;
}