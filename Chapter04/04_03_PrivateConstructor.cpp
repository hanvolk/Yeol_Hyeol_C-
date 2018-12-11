#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class AAA
{
private:
    int num;
public:
    AAA():num(0){}
    AAA& CreatInitObj(int n) const
    {
        AAA* ptr=new AAA(n);
        /*
         AAA(n) -> Private �����ڸ� �Ű����� n�� �����ؼ� ȣ���ϰ� �ִ�.
         AAA Ŭ������ Heap�� ���� �Ҵ� �Ͽ� AAA* Type�� ������ ���� ptr�� �ʱ�ȭ
        */
        return *ptr; //������ Object�� ��ȯ �ϰ� �ִ�. (��ȯ ���� ������)
    }

    void ShowNum() const
    {
        cout<<num<<endl;
    }

private:
    AAA(int n):num(n){}  //Private ������
};

int main(void)
{
    AAA base;
    base.ShowNum();

    AAA& obj1=base.CreatInitObj(3); //��ȯ�� Object�� �����ڸ� �ʱ�ȭ �ϰ� �ִ�.
    obj1.ShowNum();

    AAA& obj2=base.CreatInitObj(12);
    obj2.ShowNum();

    delete &obj1;
    delete &obj2;

    return 0;
}
