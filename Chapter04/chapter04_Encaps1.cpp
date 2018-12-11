#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SinivelCap
{
public:
    void Take() const{cout<<"�๰ ������ ġ���մϴ�. "<<endl;}
};

class SneezeCap
{
public:
    void Take() const{cout<<"��ä�� ������ ġ���մϴ�. "<<endl;}
};

class SnuffleCap
{
public:
    void Take() const{cout<<"�ڸ��� ������ ġ���մϴ�. "<<endl;}
};

class ColdPatient
{
public:
    void TakeSinivelCap(const SinivelCap& cap) const {cap.Take();}
    void TakeSneezeCap(const SneezeCap& cap) const {cap.Take();}
    void TakeSnuffleCap(const SnuffleCap& cap) const {cap.Take();}
};

int main(void)
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient snuffer;

    snuffer.TakeSinivelCap(scap);
    snuffer.TakeSneezeCap(zcap);
    snuffer.TakeSnuffleCap(ncap);

    return 0;
}
