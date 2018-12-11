#include<iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0):xpos(x), ypos(y){}

    void* operator new(size_t size)
    {
        cout<<"operator new : "<<size<<endl;
        void *adr=new char[size];
        return adr;
    }

    void* operator new[](size_t size)
    {
        cout<<"operator new[] : "<<size<<endl;
        void* adr=new char[size];

        return adr;
    }

    Point& operator*()
    {
        return *this;
    }

    void operator delete(void* adr)
    {
        cout<<"operator delete()"<<endl;
        delete []adr;
    }

    void operator delete[](void* adr)
    {
        cout<<"operator delete[]"<<endl;
        delete []adr;
    }

    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

int main(void)
{
    Point* ptr=new Point[3];
    ptr[0]={3,4};
    ptr[1]={10,20};
    ptr[2]={30,40};

    cout<<*(ptr[0]);
    delete []ptr;
    return 0;
}
