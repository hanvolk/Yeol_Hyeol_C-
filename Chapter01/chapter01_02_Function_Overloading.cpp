#include <iostream>

int MyFunc(char ch);
int MyFunc(int num);

/*
 int MyFunc(int n);
 int MyFunc(int n1, int n2);
*/

int main(void)
{
    MyFunc('A');
    MyFunc(10);

    /*
      MyFunc(10);
      MyFunc(10,20);
    */
}

int MyFunc(char ch)
{
    std::cout<<ch<<std::endl;
}

int MyFunc(int num)
{
    std::cout<<num<<std::endl;
}

/*

*/
