#include<iostream>
using namespace std;

int main(void)
{
    int val=10;
    int &num=val;
    /*
    ������ num�� ���� �ϰ�,
    ���� ���� num�� ���� val�� ����Ű�� �Ǵٸ� �̸�
    */

    cout<<"val(value) : "<<val<<endl;
    cout<<"num(Reference) : "<<num<<endl;

    num+=10;

    cout<<"val(value) : "<<val<<endl;
    cout<<"num(Reference) : "<<num<<endl;
}
