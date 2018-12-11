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
    Person(char* myname, int myage):age(myage)
    {
        name=new char[strlen(myname)+1];
        strcpy(name,myname);
    }

    void ShowPersonInfo() const
    {
        cout<<"이 름 : "<<name<<endl;
        cout<<"나 이 : "<<age<<endl;
    }
    ~Person()
    {
        delete[] name;
        cout<<"Called destructor!"<<endl;
    }
};

int main(void)
{
    Person man1("Lee Min Jae",38);
    Person man2(man1);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}
