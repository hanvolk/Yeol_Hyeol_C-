#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int MyFunc(int& ref);

int main(void)
{
    int num1=1;
    int num2=MyFunc(num1);
    /*
     int& num2=MyFunc(num1) ;
     MyFunc 가 반환 하는값은 일반 int형 ==> 일종의 상수 이다.
     그런데 참조형(int&)은 상수로 초기화 할수 없기 때문에
     오류가 발생 한다.
     */


    num1++;
    num2+=100;

    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    return 0;
}

int MyFunc(int& ref)
{
    ref++;
    return ref;
}
