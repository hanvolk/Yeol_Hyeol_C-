#include<iostream>

using namespace std;

int val=100;

int main(void)
{
    int val=20;
    cout<<"val : "<<val<<endl;
    cout<<"val : "<<::val<<endl;
    ::val+=7;

    cout<<"val : "<<val<<endl;
    cout<<"val : "<<::val<<endl;

}
