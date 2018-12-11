#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Car
{
private:
    int gasolineGauge;
public:
    Car(int fuel)
    {
        gasolineGauge=fuel;
    }
    int GetGasGauge()
    {
        return gasolineGauge;
    }
};

class HybridCar:public Car
{
private:
    int eletricGauge;
public:
    HybridCar(int gasolineFuel, int eletricFuel)
        :Car(gasolineFuel)
    {
        eletricGauge=eletricFuel;
    }
    int GetEleGauge()
    {
        return eletricGauge;
    }
};

class HybridWaterCar : public HybridCar
{
private:
    int waterGauge;
public:
    HybridWaterCar(int gasolineFuel, int eletricFuel, int waterFuel)
        :HybridCar(gasolineFuel,eletricFuel)
    {
        waterGauge=waterFuel;
    }
    void ShowCurrentGauge()
    {
        cout<<"ÀÜ¿© °¡¼Ö¸° : "<<GetGasGauge()<<endl;
        cout<<"ÀÜ¿© Àü±â·® : "<<GetEleGauge()<<endl;
        cout<<"ÀÜ¿© ¿öÅÍ·® : "<<waterGauge<<endl;
    }
};

int main(void)
{
    HybridWaterCar car1(70,80,100);
    car1.ShowCurrentGauge();
}
