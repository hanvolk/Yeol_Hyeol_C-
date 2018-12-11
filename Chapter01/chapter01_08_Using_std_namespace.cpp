#include<iostream>

/* namespace 지시문 전역변수의 위치에 있다. */
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int num=20;
    cout<<"Hello World"<<endl;
    cout<<"num : "<<num<<endl;
    cout<<"Input the New num value : ";
    cin>>num;
    cout<<"num : "<<num<<endl;
}
