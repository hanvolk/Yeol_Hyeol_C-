#include<iostream>
using namespace std;

/* �Ű������� ���� ���� num �� ����� true, ������ false ��ȯ */
bool IsPositive(int num);

int main(void)
{
    bool isPos;

    int num;
    cout<<"Input Number : ";
    cin>>num; //num�� �Է� �޴´�.

    /*
      IsPositive �Լ��� num�� �Ű������� ���� �޾Ƽ�
      bool �ڷ��� true / false �� ��ȯ�Ѵ�.
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

