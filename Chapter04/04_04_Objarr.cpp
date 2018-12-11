#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class Person
{
private:
    char* name;
    int age;
public:
    Person(char* myname, int myage)
    {
        int len=strlen(myname)+1;
        name=new char[len];
        strcpy(name,myname);
        age=myage;
    }

    Person()
    {
        name=NULL;
        age=0;
        cout<<"called Person()"<<endl;
    }

    void SetPersonInfo(char* myname, int myage)
    {
        name=myname;
        age=myage;
    }

    void ShowPersonInfo() const
    {
        cout<<"이름 : "<<name<<", "<<"나이 : "<<age<<endl;
    }

    ~Person()
    {
        delete []name;
        cout<<"called destructor!"<<endl;
    }
};

int main(void)
{
    Person parr[3]; // Person 구조체를 저장할 구조체 배열
    char namestr[100]; // 이름 문자열을 입력 받을 char형 배열
    char* strptr; // 동적할당된 Heap 메모리 영역을 가리킬 char형 포인터
    int age;
    int len;

    for(int i=0;i<3;i++)
    {
        cout<<"이름 : ";
        cin>>namestr;
        cout<<"나이 : ";
        cin>>age;

        len=strlen(namestr)+1;
        strptr=new char[len];
        strcpy(strptr,namestr);
        parr[i].SetPersonInfo(strptr,age);
    }

    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
}
