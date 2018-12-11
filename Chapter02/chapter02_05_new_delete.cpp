#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

char* MakeString(int len);

int main(void)
{
    char* str=MakeString(20);
    strcpy(str,"GyeongJin Computer");
    cout<<str<<endl;

    delete []str;
}

char* MakeString(int len)
{
    char* buf=new char[len];
    return buf;
}
