#include<iostream>
using std::cin;
using std::cout;
using std::endl;

namespace CAR_CONST
{
    enum{ID_LEN=20,MAX_SPD=200,FUEL_STEP=2,ACC_STEP=10,BRK_STEP=10};
}
struct Car
{
    char gameID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

    /*
    함수의 원형 선언은 구조체 안에 두어서
    함수의 기능(매개변수, 변환값)을 파악하기가 좋아진다. ==> 가독성이 좋아 진다.
    */
    void ShowCarState();
    void Accel();
    void Break();


};

int main(void)
{
    Car run99={"run99",100,0}; //구조체의 선언 및 초기화
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car speed77={"Speed77",100,0};
    speed77.Accel();
    speed77.Break();
    speed77.ShowCarState();
    return 0;
}


/*
  함수의 정의는 구조체 밖에 두고 있다.
  해당 함수가 어디에 정의 되어 있는지에 대한 정보(Car::)를
  추가해 줘야 한다.
*/
void Car::ShowCarState()
{
    cout<<"ID : "<<gameID<<endl;
    cout<<"연료량 : "<<fuelGauge<<endl;
    cout<<"속 도 : "<<curSpeed<<endl<<endl;
}

void Car::Accel()
{
    fuelGauge-=CAR_CONST::FUEL_STEP;
    curSpeed+=CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    curSpeed-=CAR_CONST::BRK_STEP;
}

