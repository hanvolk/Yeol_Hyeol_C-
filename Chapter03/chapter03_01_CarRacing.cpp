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
};

void ShowCarState(const Car& car)
{
    cout<<"ID : "<<car.gameID<<endl;
    cout<<"연료량 : "<<car.fuelGauge<<endl;
    cout<<"속 도 : "<<car.curSpeed<<endl<<endl;

}

void Accel(Car& car)
{
    car.fuelGauge-=FUEL_STEP;
    car.curSpeed+=ACC_STEP;
}

void Break(Car& car)
{
    car.curSpeed-=BRK_STEP;
}

int main(void)
{
    Car run99={"run99",100,0}; //구조체의 선언 및 초기화
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);

    Car speed77={"Speed77",100,0};
    Accel(speed77);
    Break(speed77);
    ShowCarState(speed77);
    return 0;
}
