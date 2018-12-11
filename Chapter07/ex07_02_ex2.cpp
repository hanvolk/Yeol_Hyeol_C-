#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class Book
{
private:
    char* title;
    char* isbn;
    int price;
public:
    Book(char* title, char* isbn, int money):price(money)
    {
        this->title=new char[strlen(title)];
        this->isbn=new char[strlen(isbn)];
        strcpy(this->title,title);
        strcpy(this->isbn,isbn);
    }
    void ShowBookInfo(void)
    {
        cout<<"�� �� : "<<this->title<<endl;
        cout<<"ISBN : "<<this->isbn<<endl;
        cout<<"�� �� : "<<this->price<<endl;
    }
};

class EBook:public Book
{
private:
    char* DRMKey;
public:
    EBook(char* title, char* isbn, int money, char* DRM):Book(title, isbn, money)
    {
        DRMKey=new char[strlen(DRM)];
        strcpy(DRMKey,DRM);
    }
    void ShowEBookInfo(void)
    {
        ShowBookInfo();
        cout<<"����Ű : "<<DRMKey<<endl;
    }
};

int main(void)
{
    Book book("���� C++","555-12345-890-0",20000);
    book.ShowBookInfo();
    cout<<endl;
    EBook ebook("���� C++ ebook","555-12345-890-1",10000,"fdx9w0i8kiw");
    ebook.ShowEBookInfo();

    return 0;
}
