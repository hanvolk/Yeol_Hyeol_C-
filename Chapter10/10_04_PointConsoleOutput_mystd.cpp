#include<iostream>
class Point;
namespace mystd
{
    class ostream
    {
    public:
        ostream& operator<<(char* str)
        {
            printf("%s",str);
            return *this;
        }
        ostream& operator<<(char str)
        {
            printf("%c",str);
            return *this;
        }
        ostream& operator<<(int num)
        {
            printf("%d",num);
            return *this;
        }
        ostream& operator<<(double e)
        {
            printf("%g",e);
            return *this;
        }
        ostream& operator<<(ostream& (*fp)(ostream& ostm))
        {
            return fp(*this);
        }
        ostream& operator<<(const Point& pos)
        {
            pos.ShowPosition();
            return *this;
        }
    };

    ostream& endl(ostream& ostm)
    {
        ostm<<'\n';
        fflush(stdout);
        return ostm;
    }

    ostream cout;
}

using namespace mystd;

class Point
{

private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0):xpos(x), ypos(y)
    { }
    void ShowPosition() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
};

int main(void)
{
    cout<<3.14<<endl;
    Point pos1(1,3);
    cout<<pos1;


    return 0;
}
