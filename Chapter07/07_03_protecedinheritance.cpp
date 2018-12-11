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
    Base(int n1, int n2, int n3):num1(n1), num2(n2), num3(n3){};
};

class Derived : protected Base
{
public:
    Derived(int n1, int n2, int n3):Base(n1,n2,n3){}
    void ShowBaseData()
    {
        //cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
        cout<<"num3 : "<<num3<<endl;
    }
    int Getnum3(){return num3;}

};

class DeDerived : public Derived
{
public:
    DeDerived(int n1, int n2, int n3):Derived(n1,n2,n3){};
    int GetNum2(){return num2;}
};

int main(void)
{
    DeDerived dr1(10,20,30);
    dr1.ShowBaseData();
    cout<<"num2 : "<<dr1.GetNum2()<<endl;
    cout<<"num3 : "<<dr1.Getnum3()<<endl;
    //cout<<"num3(dr1.num3) : "<<dr1.num3<<endl;
    return 0;
}
