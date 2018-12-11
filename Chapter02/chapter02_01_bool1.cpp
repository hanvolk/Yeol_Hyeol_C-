#include<iostream>
using namespace std;

int main(void)
{
    int i=0;

    while(1)
    {
        cout<<i++<<' ';
        if(i>10)
        {
           cout<<endl;
           break;
        }
    }

    i=0;

    while(true)
    {
        cout<<i++<<' ';
        if(i>10)
        {
           cout<<endl;
           break;
        }
    }

    cout<<"1 : "<<sizeof(1)<<endl;
    cout<<"0 : "<<sizeof(0)<<endl;
    cout<<"true : "<<sizeof(true)<<endl;
    cout<<"false :"<<sizeof(false)<<endl;
}

