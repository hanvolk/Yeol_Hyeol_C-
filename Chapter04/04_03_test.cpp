#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Point
{
private:
    int x;
    int y;
public:


    void showPoint() const
    {
        cout<<'['<<x<<", "<<y<<']'<<endl;
    }
    int Getx()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
};

class Rectangle
{
private:
    Point upLeft;
    Point lowRight;
public:
    bool InitMembers(const Point& ul, const Point& lr)
    {
        upLeft=ul;
        lowRight=lr;

        return true;
    }

    void ShowRecInfo()
    {
        cout<<"UpLeft Point : "<<'['<<upLeft.Getx()<<", "<<upLeft.GetY()<<']'<<endl;
        cout<<"LowRight Point : "<<'['<<lowRight.Getx()<<", "<<lowRight.GetY()<<']'<<endl;
    }
};

int main(void)
{
    Point ul(3,5);
    Point lr(7,10);
    Rectangle rec;
    rec.InitMembers(ul,lr);

    rec.ShowRecInfo();
    return 0;
}
