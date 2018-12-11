#include<iostream>
using namespace std;

void MyFunc(const int* ptr1, int* const ptr2, const int* const ptr3);

int main(void)
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};

    int* ptr1=&arr[0];
    int* ptr2=&arr[1];
    int* ptr3=&arr[2];

    MyFunc(ptr1, ptr2, ptr3);

    return 0;
}

void MyFunc(const int* ptr1, int* const ptr2, const int* const ptr3)
{
    /*
     cont int* ptr1       : 포인터 접근(O),  포인터 연산(O),  포인터를 통한 값의 변경(X)
     int* const ptr2      : 포인터 접근(O),  포인터 연산(X),  포인터를 통한 값의 변경(O)
     cons int* const Ptr3 : 포인터 접근(O),  포인터 연산(X),  포인터를 통한 값의 변경(X)
    */

    cout<<*ptr1<<' '<<*ptr2<<' '<<*ptr3<<endl;

    ptr1++;
    // *ptr=11;

    cout<<*ptr1<<' '<<*ptr2<<' '<<*ptr3<<endl;

    // ptr2++;
    *ptr2=22;

    // ptr3++;
    // *ptr3=33;

    cout<<*ptr1<<' '<<*ptr2<<' '<<*ptr3<<endl;

}
