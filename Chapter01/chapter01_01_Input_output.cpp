#include<iostream>

int main(void)
{
    int num=30;

    /* printf�� ����ϴ� cout */
    std::cout<<"Hello World"<<std::endl;

    std::cout<<num<<' '<<'A';
    std::cout<<' '<<3.14<<std::endl;

    /*
      C++ ������ ���������� ��� ���� �ϵ� ��� ����
    */
    int val1, val2;
    double v1, v2;

    /*
      scanf�� ����ϴ� cin
      C++ ������ Data�� I/O�� ������ ���Ĺ��ڰ� �ʿ����.
    */
    std::cout<<"���� ������ 2�� �Է� �ϼ��� ";
    std::cin>>val1>>val2;
    std::cout<<"�Է��� �����ʹ� : "<<val1<<", "<<val2<<std::endl;

    std::cout<<"�Ǽ��� ������ 2���� �Է� �ϼ��� ";
    std::cin>>v1>>v2;
    std::cout<<"�Է��� �����ʹ� : "<<v1<<", "<<v2<<std::endl;

    int sum=0;

    /*
     for �ݸ� �ȿ����� int�� ������ ���� �� �� ������
     �̷��� ������ ������ for�ݺ��� �ȿ����� ��ȿ�� ���������� �ȴ�.
    */
    for(int i=1;i<10;i++)
    {
        std::cout<<sum<<" + "<<i<<" = ";
        sum+=i;
        std::cout<<sum<<std::endl;
    }

    std::cout<<sum;
    // std::cout<<i; //���� �߻� �Ѵ�.

}
