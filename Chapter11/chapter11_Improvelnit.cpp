#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class AAA
{
private:
    int num;
public:
    AAA(int n=0):num(n)
    {
        cout<<"AAA Ŭ���� �Ϲݻ����� ȣ��"<<endl;
    }
    AAA(const AAA& cpy):num(cpy.num)
    {
        cout<<"AAA Ŭ���� ���� ������ ȣ��"<<endl;
    }
    AAA& operator=(const AAA& ref)
    {
        num=ref.num;
        cout<<"AAA Ŭ���� ���� ������ �����ε� "<<endl;
        return *this;
    }
};

class BBB
{
private:
    AAA mem;
public:
    BBB(const AAA& ref):mem(ref){} // Use Member Initializer
};

class CCC
{
private:
    AAA mem;
public:
    CCC(const AAA& ref)
    {
        mem=ref;  // Use Assignment operator
    }
};

int main(void)
{
    AAA obj1(12);
    cout<<"========================="<<endl;
    BBB obj2(obj1);
    cout<<"========================="<<endl;
    CCC ojb3(obj1);

    return 0;

}
