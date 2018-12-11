#include<iostream>
using namespace std;

class Point
{
private:
    int xpos;
    int ypos;
public:
    Point(int x=0, int y=0):xpos(x), ypos(y){}
    void ShowPosition(void)
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }

    Point operator-()
    {
        Point result;
        result.xpos=xpos*-1;
        result.ypos=ypos*-1;
        return result;
    }

    friend Point operator~(Point& ref);
};

int main(void)
{
    Point pos1(5,7);
    pos1.ShowPosition();
    Point pos2=-pos1;
    pos1.ShowPosition();
    pos2.ShowPosition();

    pos2=~pos1;
    pos1.ShowPosition();
    pos2.ShowPosition();
}

Point operator~(Point& ref)
{
    Point result;
    result.xpos=~ref.xpos;
    result.ypos=~ref.ypos;

    return result;
}
