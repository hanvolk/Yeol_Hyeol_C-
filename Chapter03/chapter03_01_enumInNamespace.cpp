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

    void ShowCarState()
    {
        cout<<"ID : "<<gameID<<endl;
        cout<<"연료량 : "<<fuelGauge<<endl;
        cout<<"속 도 : "<<curSpeed<<endl<<endl;

    }

    void Accel()
    {
        fuelGauge-=CAR_CONST::FUEL_STEP;
        curSpeed+=CAR_CONST::ACC_STEP;
    }

    void Break()
    {
        curSpeed-=CAR_CONST::BRK_STEP;
    }

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
