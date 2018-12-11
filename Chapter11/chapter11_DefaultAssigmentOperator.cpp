#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class A
{
private:
    int num1;
public:
    A(int n1=0):num1(n1){}
    void ShowNum(void)
    {
        cout<<"Num1 : "<<num1<<endl;
    }
};

int main(void)
{
    A a1(3);
    A a2(7);

    a1.ShowNum();
    a2.ShowNum();

    a1=a2;
    //a2=a1;

    a1.ShowNum();
    a2.ShowNum();
}
