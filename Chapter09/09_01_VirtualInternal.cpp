
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class AAA
{
private:
    int num1;
public:
    virtual void Func1() {cout<<"AAA::Func1"<<endl;}
    virtual void Func2() {cout<<"AAA::Func2"<<endl;}
};

class BBB:public AAA
{
private:
    int num2;
public:
    void Func1() {cout<<"BBB::Func1"<<endl;}
    void Func3() {cout<<"BBB::Func3"<<endl;}
};


int main(void)
{
    AAA* ptr1=new AAA();
    ptr1->Func1();

    ptr1=new BBB();
    ptr1->Func1();


}
