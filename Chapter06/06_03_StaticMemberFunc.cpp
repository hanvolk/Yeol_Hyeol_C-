#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class SoSimple
{
private:
    int num1;
    static int num2;
public:
    SoSimple(int n):num1(n){}

    static void Adder(int n)
    {
        // num1+=n;
        num2+=n;
    }

    int GetNum1(void){return num1;}
    int GetNum2(void){return num2;};
};
int SoSimple::num2=0;

int main(void)
{
    SoSimple obj(10);
    SoSimple::Adder(20);

    cout<<"num1 : "<<obj.GetNum1()<<endl;
    cout<<"num2 : "<<obj.GetNum2()<<endl;
    return 0;
}
