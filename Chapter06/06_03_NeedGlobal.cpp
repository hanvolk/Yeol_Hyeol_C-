#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int sim1cnt=0;
int sim2cnt=0;

class sim1
{
  public:
      void ShowCnt(void)
      {
          sim1cnt++;
          cout<<"Call Sim1.ShowCnt()  and sim1cnt : "<<sim1cnt<<endl;
      }
};

class sim2
{
public:
    void ShowCnt(void)
    {
        sim2cnt++;
        cout<<"Call Sim2.ShowCnt()  and sim1cnt : "<<sim2cnt<<endl;
    }
};

int main(void)
{
    sim1 ob1;
    sim2 ob2;

    ob1.ShowCnt();
    ob2.ShowCnt();

    ob1.ShowCnt();
    ob2.ShowCnt();

    sim1cnt++;
    ob1.ShowCnt();
    ob2.ShowCnt();
}
