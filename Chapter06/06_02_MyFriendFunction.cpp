#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Point;

class PointOP
{
private:
    int opcnt;
public:
    PointOP(): opcnt(0){}

    Point PointAdd(const Point& pnt1, const Point& pnt2);
    Point PointSub(const Point& pnt1, const Point& pnt2);

    ~PointOP()
    {
        cout<<"Operation times : "<<opcnt<<endl;
    }
};

class Point
{
private:
    int x;
    int y;
public:
    Point(const int &xpos, const int &ypos):x(xpos), y(ypos){}
    friend Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2);
    friend Point PointOP::PointSub(const Point& pnt1, const Point& pnt2);
    friend void ShowPointPos(const Point& pos);
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x+pnt2.x, pnt1.y+pnt2.y);
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x-pnt2.x, pnt1.y-pnt2.y);
}

int main(void)
{
    Point pos1(1,2);
    Point pos2(2,4);
    PointOP op;

    ShowPointPos(op.PointAdd(pos1, pos2));
    ShowPointPos(op.PointSub(pos1, pos2));
    return 0;

}

void ShowPointPos(const Point& pos)
{
    cout<<"x : "<<pos.x<<", "<<"y : "<<pos.y<<endl;
}
