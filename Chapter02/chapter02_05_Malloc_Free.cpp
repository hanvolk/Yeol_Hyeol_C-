#include<iostream>
#include<cstring>
using namespace std;

char* MakeString(int len);

int main(void)
{
    char* str=MakeString(20);
    strcpy(str,"GyeongJin Computer");
    cout<<str<<endl;
    free(str);
}

char* MakeString(int len)
{
    char* buf=(char*)malloc(sizeof(char)*len);
    return buf;
}
