#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0):xpos(x), ypos(y)
    { }

    void ShowPosition() const
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }

    /*
    Point& operator++() //�ɹ� �Լ��� ���ǵ� ������ �����ε�
    {
        xpos+=1;
        ypos+=1;
        return *this;
    }

    friend Point& operator--(Point& ref); // ���� �Լ��� ���ǵ� ������ �����ε�

    */
    Point operator++() //�ɹ� �Լ��� ���ǵ� ������ �����ε�
    {
        xpos+=1;
        ypos+=1;
        return *this;
    }

    friend Point operator--(Point& ref); // ���� �Լ��� ���ǵ� ������ �����ε�


};

/*
Point& operator--(Point& ref)
{
    ref.xpos-=1;
    ref.ypos-=1;
    return ref;
}
*/

Point operator--(Point& ref)
{
    ref.xpos-=1;
    ref.ypos-=1;
    return ref;
}

int main(void)
{
    Point pos1(2,5);
    pos1.ShowPosition();

    ++pos1;
    pos1.ShowPosition();

    ++(++pos1);
    pos1.ShowPosition();

    --pos1;
    pos1.ShowPosition();

    //--(--pos1);
    pos1.ShowPosition();


    return 0;
}
