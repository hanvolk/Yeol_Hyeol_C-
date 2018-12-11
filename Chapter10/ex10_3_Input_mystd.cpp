#include<iostream>
#include<cstdio>
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
    };

    ostream& endl(ostream& ostm)
    {
        ostm<<'\n';
        fflush(stdout);
        return ostm;
    }

    ostream cout;
    ostream cin;
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
        cout<<'['<<xpos<<','<<' '<<ypos<<']'<<endl;
    }

    friend Point operator*(int times, Point& ref);
    friend ostream& operator<<(ostream&, const Point&);
    friend ostream& operator>>(ostream&, Point&);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<','<<' '<<pos.ypos<<']'<<endl;
    return os;
}

ostream& operator>>(ostream& os, Point& pos)
{
    scanf("%d %d",&pos.xpos,&pos.ypos);
    return os;
}

int main(void)
{
    Point pos1;
    cout<<"X, Y 좌표 순으로 입력 :";
    cin>>pos1;
    cout<<pos1;

    Point pos2;
    cout<<"X, Y 좌표 순으로 입력 :";
    cin>>pos2;
    cout<<pos2;

    return 0;


}

