#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class sim1
{
private:
    static int sim1cnt;
public:
      void ShowCnt(void)
      {
          sim1cnt++;
          cout<<"Call Sim1.ShowCnt()  and sim1cnt : "<<sim1cnt<<endl;
      }
};
int sim1::sim1cnt=0;

class sim2
{
private:
    static int sim2cnt;
public:
    void ShowCnt(void)
    {
        sim2cnt++;
        cout<<"Call Sim2.ShowCnt()  and sim1cnt : "<<sim2cnt<<endl;
    }
};
int sim2::sim2cnt=0;

int main(void)
{
    sim1 ob1;
    sim1 ob2;

    ob1.ShowCnt();
    ob2.ShowCnt();

    ob1.ShowCnt();
    ob2.ShowCnt();

   // sim1cnt++;
    ob1.ShowCnt();
    ob2.ShowCnt();
}
