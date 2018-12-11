#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class SoSimple
{
private:
    static int simObjCnt;
public:
    SoSimple() // ������
    {
        simObjCnt++;
        cout<<simObjCnt<<"��° SoSimple ��ü (�Ϲ�)"<<endl;
    }
};
int SoSimple::simObjCnt=0;

class SoComplex
{
private:
    static int cmxObjCnt;
public:
    SoComplex()  // �Ϲ� ������
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"��° SoComplex ��ü(�Ϲ�)"<<endl;
    }
    SoComplex(SoComplex &copy)  //���� ������
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"��° SoComplex ��ü(����)"<<endl;
    }
};
int SoComplex::cmxObjCnt=0;

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    cout<<"---1---"<<endl;
    SoComplex cmx1;
    cout<<"---2---"<<endl;
    SoComplex cmx2=cmx1;
    cout<<"---3---"<<endl;
    SoComplex();

    return 0;
}

