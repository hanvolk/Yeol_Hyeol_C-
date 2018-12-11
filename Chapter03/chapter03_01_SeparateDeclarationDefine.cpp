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
    �Լ��� ���� ������ ����ü �ȿ� �ξ
    �Լ��� ���(�Ű�����, ��ȯ��)�� �ľ��ϱⰡ ��������. ==> �������� ���� ����.
    */
    void ShowCarState();
    void Accel();
    void Break();


};

int main(void)
{
    Car run99={"run99",100,0}; //����ü�� ���� �� �ʱ�ȭ
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
  �Լ��� ���Ǵ� ����ü �ۿ� �ΰ� �ִ�.
  �ش� �Լ��� ��� ���� �Ǿ� �ִ����� ���� ����(Car::)��
  �߰��� ��� �Ѵ�.
*/
void Car::ShowCarState()
{
    cout<<"ID : "<<gameID<<endl;
    cout<<"���ᷮ : "<<fuelGauge<<endl;
    cout<<"�� �� : "<<curSpeed<<endl<<endl;
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

