#include<iostream>
using namespace std;

int main(void)
{
    int val=10;
    int &num=val;
    /*
    참조자 num을 선언 하고,
    이제 부터 num은 변수 val을 가리키는 또다른 이름
    */

    cout<<"val(value) : "<<val<<endl;
    cout<<"num(Reference) : "<<num<<endl;

    num+=10;

    cout<<"val(value) : "<<val<<endl;
    cout<<"num(Reference) : "<<num<<endl;
}
