#include<iostream>

int main(void)
{
    int num=30;

    /* printf를 대신하는 cout */
    std::cout<<"Hello World"<<std::endl;

    std::cout<<num<<' '<<'A';
    std::cout<<' '<<3.14<<std::endl;

    /*
      C++ 에서는 지역변수를 어디서 삽입 하든 상관 없다
    */
    int val1, val2;
    double v1, v2;

    /*
      scanf를 대신하는 cin
      C++ 에서는 Data의 I/O에 별도의 서식문자가 필요없다.
    */
    std::cout<<"정수 데이터 2개 입력 하세요 ";
    std::cin>>val1>>val2;
    std::cout<<"입력한 데이터는 : "<<val1<<", "<<val2<<std::endl;

    std::cout<<"실수형 데이터 2개를 입력 하세요 ";
    std::cin>>v1>>v2;
    std::cout<<"입력한 데이터는 : "<<v1<<", "<<v2<<std::endl;

    int sum=0;

    /*
     for 반목문 안에서도 int형 변수를 선언 할 수 있지만
     이렇게 선언한 변수는 for반복문 안에서만 유효한 지역변수가 된다.
    */
    for(int i=1;i<10;i++)
    {
        std::cout<<sum<<" + "<<i<<" = ";
        sum+=i;
        std::cout<<sum<<std::endl;
    }

    std::cout<<sum;
    // std::cout<<i; //오류 발생 한다.

}
