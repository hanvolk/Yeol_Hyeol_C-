#include<iostream>
using namespace std;

/* 매개변수로 전달 받은 num 이 양수면 true, 음수면 false 반환 */
bool IsPositive(int num);

int main(void)
{
    bool isPos;

    int num;
    cout<<"Input Number : ";
    cin>>num; //num을 입력 받는다.

    /*
      IsPositive 함수는 num을 매개변수로 전달 받아서
      bool 자료형 true / false 를 반환한다.
    */
    isPos=IsPositive(num);

    if(isPos)
        cout<<"The Number is Bigger then Zero"<<endl;
    else
        cout<<"The Number is Smaller then Zero"<<endl;

    return 0;
}

bool IsPositive(int num)
{
    if(num>0)
        return true;
    else
        return false;
}

