#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Base
{
private:
    int num1;
protected:
    int num2;
public:
    int num3;
    Base():num1(1), num2(2), num3(3){};
    Base(int n1, int n2, int n3):num1(n1), num2(n2), num3(n3){};
    void ShowData()
    {
        cout<<"num1 : "<<endl;
        cout<<"num2 : "<<endl;
        cout<<"num3 : "<<endl;
    }
};

class Derived : public Base
{
private:
    int Dnum;
public:
    Derived(int n1, int n2, int n3, int n4):Base(n1,n2,n3), Dnum(n4){};
    void ShowBaseData()
    {
        //cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
        cout<<"num3 : "<<num3<<endl;
    }
    int GetDnum(){return Dnum;};

};

int main(void)
{
    Derived dr1(10,20,30,400);
    dr1.ShowBaseData();
    cout<<"Dnum : "<<dr1.GetDnum()<<endl;
    return 0;
}
