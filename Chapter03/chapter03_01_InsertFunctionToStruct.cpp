#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gameID[ID_LEN];
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
        fuelGauge-=FUEL_STEP;
        curSpeed+=ACC_STEP;
    }

    void Break()
    {
        curSpeed-=BRK_STEP;
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
