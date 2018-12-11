#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class AAA
{
private:
    int num1;
    int num2;
public:
    void ShowNum(void);
    void SetNum(int n1, int n2);
    AAA(int n1, int n2);
    AAA(){};


};

int main(void)
{
    AAA obj1[3];

    obj1[0].AAA(10,20)

    return 0;

}

AAA::AAA(int n1, int n2):num1(n1), num2(n2)
{

}

void AAA::SetNum(int n1, int n2)
{
    num1=n1;
    num2=n2;
}

void AAA::ShowNum(void)
{
    cout<<"Num 1 : "<<num1<<endl;
    cout<<"Num 2 : "<<num2<<endl;
}
