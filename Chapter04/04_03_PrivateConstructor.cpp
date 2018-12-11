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
         AAA(n) -> Private 생성자를 매개변수 n을 전달해서 호출하고 있다.
         AAA 클래스를 Heap에 동적 할당 하여 AAA* Type의 포인터 변수 ptr을 초기화
        */
        return *ptr; //생성된 Object를 반환 하고 있다. (반환 형은 참조자)
    }

    void ShowNum() const
    {
        cout<<num<<endl;
    }

private:
    AAA(int n):num(n){}  //Private 생성자
};

int main(void)
{
    AAA base;
    base.ShowNum();

    AAA& obj1=base.CreatInitObj(3); //반환된 Object로 참조자를 초기화 하고 있다.
    obj1.ShowNum();

    AAA& obj2=base.CreatInitObj(12);
    obj2.ShowNum();

    delete &obj1;
    delete &obj2;

    return 0;
}
