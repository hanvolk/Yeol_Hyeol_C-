#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int& MyFunc(int val);
// �����ڸ� ��ȯ �ϴ� �Լ�

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
    // �����ڸ� ��ȯ������ ���� �� ����, �Լ� ������ ���� ���� num�� ��ȯ
}
