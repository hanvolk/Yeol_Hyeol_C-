#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

class Point
{
private:
    int xpos, ypos;
public:
    void Init(int x, int y)
    {
        xpos=x;
        ypos=y;
    }
    void ShowPointInfo()  // ���� ��ǥ�� ���
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Circle
{
private:
    Point center; //Point Ŭ������ ������� �ϴ� �߽��� Ŭ����
    int radius;
public:
    void Init(int x, int y, int rad) // ���� �߽����� �������� �ʱ�ȭ �ϴ� �Լ�
    {
        center.Init(x,y); // �߽��� �ʱ�ȭ
        radius=rad;        // ������ �ʱ�ȭ
    }
    void ShowCircleInfo() // ���� ������ ���
    {
        cout<<"Radius : "<<radius<<endl;
        center.ShowPointInfo(); //PointŬ����(center)�� ShowPointInfo ȣ��
    }
};

class Ring // Ring(��) �� ǥ���ϴ� Ring Ŭ����
{
private:  // Circle Ŭ������ ������� �ϴ� ���� ��(Inner)�� �ٱ��� ��(Outter)�� private�� ����
    Circle Inner;
    Circle Outter;
public:
    void Init(int inX, int inY, int inR, int outX, int outY, int outR)
    {
        int distance; // �� ��(Inner, Outter�� �߽���)������ �Ÿ�
        //�Ÿ� = sqrt(power(���� ����^2 + ���� ����^2)) --> ��Ÿ��� ���� ����
        distance=(int)sqrt(pow((double)abs(inX-outX),2.0)+pow((double)abs(inY-outY),2.0));

        // �������� �� ����� �Ƿ��� (���� ������ �Ÿ� + Inner�� ������) �� Outter�� ������ ���� �۾ƾ� �Ѵ�.
        if(distance+inR<outR)
        {
            Inner.Init(inX,inY,inR);
            Outter.Init(outX, outY, outR);
        }
        else
        {
            cout<<"�߸��� ���� �Դϴ�."<<endl;
        }
    }

    void ShowRingInfo() // ���� ����(Inner�� Outter�� ������ ����) ���
    {
        cout<<"Inner Circle Info : "<<endl;
        Inner.ShowCircleInfo();
        cout<<"Outter Circle Info : "<<endl;
        Outter.ShowCircleInfo();
    }
};

int main(void)
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}
