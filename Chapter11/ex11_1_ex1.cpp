#include <iostream>
//#include <cstring>
using namespace std;

class Gun
{
private:
    int bullet;
public:
    Gun(int bnum=0):bullet(bnum){}
    void ShowGunInfo(void)
    {
        cout<<"Bullent count : "<<bullet<<endl;
    }
    void Shot(void)
    {
        cout<<"BBANG~!!"<<endl;
        bullet--;
    }
};

class Police
{
private:
    int handcuffs;
    Gun* pistol;
public:
    Police(int bnum=0, int bcuff=0):handcuffs(bcuff) // �Ϲ� ������
    {
        if(bnum>0)
            pistol=new Gun(bnum);
        else
            pistol=NULL;
    }

    Police(const Police& cpy):handcuffs(cpy.handcuffs) // ���� ������
    {
        cout<<"Police�� ���� ������ ȣ�� "<<endl;
        pistol=new Gun(0);
        pistol=cpy.pistol;
    }

    Police& operator=(const Police& ref) // ���Կ�����
    {
        cout<<"Police�� ���Կ����� ȣ�� "<<endl;
        delete pistol;
        pistol = new Gun(0);
        pistol=ref.pistol;
        handcuffs=ref.handcuffs;
        return *this;
    }

    void puthandcuff()
    {
        cout<<"SNAP!"<<endl;
        handcuffs--;
    }

    void Shot()
    {
        if(pistol==NULL)
            cout<<"HUT BBANG~"<<endl;
        else
            pistol->Shot();
    }

    void ShowPoliceInfo()
    {
        pistol->ShowGunInfo();
        cout<<"handcuffs count : "<<handcuffs<<endl;
    }

    ~Police()
    {
        if(pistol!=NULL)
            delete pistol;
    }
};

int main(void)
{
    Police pman1(5,3);
    Police pman2;
    /*
    cout<<"=== Police pman2=pman1 ===="<<endl;
    Police pman2=pman1;
    cout<<endl<<"=== pman1.ShowPoliceInfo(); ===="<<endl;
    pman1.ShowPoliceInfo();
    cout<<endl<<"=== pman2.ShowPoliceInfo(); ===="<<endl;
    pman2.ShowPoliceInfo();
    */

    cout<<"=== ������ ��ü�� ���� pman2=pman1 ===="<<endl;
    pman2=pman1;
    cout<<endl<<"=== pman1.ShowPoliceInfo(); ===="<<endl;
    pman1.ShowPoliceInfo();
    cout<<endl<<"=== pman2.ShowPoliceInfo(); ===="<<endl;
    pman2.ShowPoliceInfo();

}
