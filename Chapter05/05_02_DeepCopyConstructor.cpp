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

    Person(const Person &copy):age(copy.age)
    {
        name=new char[strlen(copy.name)+1];
        strcpy(name,copy.name);
    }

    void ShowPersonInfo() const
    {
        cout<<"�� �� : "<<name<<endl;
        cout<<"�� �� : "<<age<<endl;
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
