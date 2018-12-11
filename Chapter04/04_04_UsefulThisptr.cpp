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
    Person(char* name, int age)
    {
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        this->age=age;
    }

    void SetPersonInfo(char* name, int age)
    {
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        this->age=age;
    }

    void ShowPersonInfo() const
    {
        cout<<"�̸� : "<<name<<", "<<"���� : "<<age<<endl;
    }

    ~Person()
    {
        delete []name;
    }
};

int main(void)
{
    Person man1("ȫ�浿",29);
    man1.ShowPersonInfo();

    char name[100];
    int age;

    cout<<"�̸� : ";
    cin>>name;

    cout<<"���� : ";
    cin>>age;

    Person man2(name, age);
    man2.ShowPersonInfo();

    man1.SetPersonInfo(name, age);
    man1.ShowPersonInfo();
}
