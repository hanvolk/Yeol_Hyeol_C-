#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int& MyFunc(int val);
// 참조자를 반환 하는 함수

int main(void)
{
    int num=10;
    int& data=MyFunc(num);

    cout<<"num : "<<num<<endl;
    cout<<"data : "<<data<<endl;

    return 0;
}

int& MyFunc(int val)
{
    int num=10;

    num+=val;

    return num;
    // 참조자를 반환형으로 정의 해 놓고, 함수 내부의 지역 변수 num을 반환
}
