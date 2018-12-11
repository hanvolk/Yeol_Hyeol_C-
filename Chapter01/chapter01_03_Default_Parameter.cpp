#include<iostream>

int Add(int n1=5, int n2=7);
// int Add1(int n1=5, int n2=7, int n3);

int main(void)
{
    std::cout<<"n1 + n2 = "<<Add()<<std::endl;
    std::cout<<"n1 + n2 = "<<Add(10,20)<<std::endl;

}

int Add(int n1, int n2)
{
    return n1+n2;
}

/*
int Add1(int n1, int n2, int n3)
{
    return n1+n2+n3;
}
*/
