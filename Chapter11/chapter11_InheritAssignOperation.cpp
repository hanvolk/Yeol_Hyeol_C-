#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class First
{
private:
    int num1, num2;
public:
    First(int n1=0, int n2=0):num1(n1), num2(n2){}
    void ShowData(void){cout<<num1<<", "<<num2<<endl;}

    First& operator=(const First& ref)
    {
        cout<<"First 대입연산자 호출 "<<endl;
        num1=ref.num1;
        num2=ref.num2;
        return *this;
    }
};

class Second:public First
{
private:
    int num3, num4;
public:
    Second(int n1=0, int n2=0, int n3=0, int n4=0):First(n1, n2),num3(n3), num4(n4)
    { }
    void ShowData(void)
    {
        First::ShowData();
        cout<<num3<<", "<<num4<<endl;
    }

    /*
    Second& operator=(const Second& ref)
    {
        cout<<"Second 대입연산자 호출 "<<endl;
        num3=ref.num3;
        num4=ref.num4;
        return *this;
    }
    */
    Second& operator=(const Second& ref)
    {
        cout<<"Second 대입연산자 호출 "<<endl;
        First::operator=(ref);
        num3=ref.num3;
        num4=ref.num4;
        return *this;
    }

};

int main(void)
{
    Second a(10,20,30,40);
    Second b;

    a.ShowData();
    b.ShowData();

    b=a;
    a.ShowData();
    b.ShowData();

}
