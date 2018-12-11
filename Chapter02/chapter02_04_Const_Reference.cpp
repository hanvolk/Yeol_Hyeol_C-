#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    const int num=10;
    const& ref=50;

    cout<<num<<endl;
    cout<<ref<<endl;

    return 0;
}
