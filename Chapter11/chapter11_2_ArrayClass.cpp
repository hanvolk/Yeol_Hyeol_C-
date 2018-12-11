#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class uArray
{
private:
    int* arr;
    int arrlen;
public:
    uArray(int len):arrlen(len)
    {
        arr=new int(len);
    }

    int& operator[](int idx) // ��ü[idx]
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"�迭�� Index�� �迭�� ������ ���� �����ϴ�."<<endl;
            exit(1);
        }

        return arr[idx];
    }
};

int main(void)
{
    uArray arr(5);
    for(int i=0;i<5;i++)
    {
        arr[i]=(i+1)*10;
    }

    arr[7]=10;

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
