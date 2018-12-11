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
     main 함수에서 using 키워드로 Gjcom의 MyFunc와 num 지정 했지만
     이는 지역변수와 마찬가지로 선언된 지역을 벗어나면 효력을 잃게 된다.
     프로그램 전체에 유효하게 하려면 전역변수 처럼 함수 밖에 선언 해야 한다.
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
