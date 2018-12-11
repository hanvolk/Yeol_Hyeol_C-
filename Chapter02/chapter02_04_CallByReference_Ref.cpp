#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void SwapValue(int &ref1, int &ref2);

int main(void)
{
    int num1=10;
    int num2=20;
    cout<<num1<<' '<<num2<<endl;
    SwapValue(num1, num2);
    cout<<num1<<' '<<num2<<endl;

    return 0;
}

void SwapValue(int &ref1, int &ref2)
{
    int buf;
    buf=ref1;
    ref1=ref2;
    ref2=buf;
}
