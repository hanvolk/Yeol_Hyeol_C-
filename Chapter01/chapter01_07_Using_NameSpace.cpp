#include<iostream>
namespace Gjcom
{
    void MyFunc(void)
    {
        std::cout<<"GyeongJin Computer Academy"<<std::endl;
    }
    int num=10;
}

void Func(void)
{
   /*
     main �Լ����� using Ű����� Gjcom�� MyFunc�� num ���� ������
     �̴� ���������� ���������� ����� ������ ����� ȿ���� �Ұ� �ȴ�.
     ���α׷� ��ü�� ��ȿ�ϰ� �Ϸ��� �������� ó�� �Լ� �ۿ� ���� �ؾ� �Ѵ�.
   */
   // MyFunc();
   // std::cout<<num<<std::endl;
}

int main(void)
{
    using Gjcom::MyFunc;
    using Gjcom::num;

    MyFunc();
    std::cout<<num<<std::endl;

    Func();
}
