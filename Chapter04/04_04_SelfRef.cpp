#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class SelfRef
{
private:
    int num;
public:
    SelfRef(int n):num(n)
    {
        cout<<"°´Ã¼ »ı¼º"<<endl;
    }

    SelfRef& Adder(int n)
    {
        num+=n;
        return *this;
    }

    SelfRef& ShowNumber()
    {
        cout<<num<<endl;
        return *this;
    }
};

int main(void)
{
    SelfRef obj(3);
    SelfRef &ref=obj.Adder(2);

    obj.ShowNumber();
    ref.ShowNumber();

    ref.Adder(1).ShowNumber().Adder(2).ShowNumber();
    return 0;
}
