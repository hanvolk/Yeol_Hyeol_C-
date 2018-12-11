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
    /*
        char형 포인터(문자열), 과 나이를 입력 받아서
        이름(char* name)과 나이를 초기화
    */
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
        cout<<"Called Person()"<<endl;
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
    Person* parr[3];
    char namestr[100];
    int age;

    for(int i=0;i<3;i++)
    {
        cout<<"이름 : ";
        cin>>namestr;
        cout<<"나이 : ";
        cin>>age;
        parr[i]=new Person(namestr,age);
    }

    parr[0]->ShowPersonInfo();
    parr[1]->ShowPersonInfo();
    parr[2]->ShowPersonInfo();

    delete parr[0];
    delete parr[1];
    delete parr[2];

    return 0;
}
