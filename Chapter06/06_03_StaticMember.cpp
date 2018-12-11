#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class SoSimple
{
private:
    static int simObjCnt;
public:
    SoSimple() // 생성자
    {
        simObjCnt++;
        cout<<simObjCnt<<"번째 SoSimple 객체 (일반)"<<endl;
    }
};
int SoSimple::simObjCnt=0;

class SoComplex
{
private:
    static int cmxObjCnt;
public:
    SoComplex()  // 일반 생성자
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"번째 SoComplex 객체(일반)"<<endl;
    }
    SoComplex(SoComplex &copy)  //복사 생성자
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"번째 SoComplex 객체(복사)"<<endl;
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

