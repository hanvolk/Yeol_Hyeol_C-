#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int Adder(const int& num1, const int& num2);

int main(void)
{
    cout<<"Num1 + Num2 = "<<Adder(2,3)<<endl;
    return 0;
}

int Adder(const int& num1, const int& num2)
{
    return num1+num2;
}
