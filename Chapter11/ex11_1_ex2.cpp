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
    Book(const char* title,const char* isbn,const int money):price(money)  // 생성자
    {
        //cout<<"== Book 클래스의 일반 생성자 호출 =="<<endl;
        this->title=new char[strlen(title)];
        this->isbn=new char[strlen(isbn)];
        strcpy(this->title,title);
        strcpy(this->isbn,isbn);
    }
    Book(const Book& cpy):price(cpy.price) // 복사 생성자(깊은 복사)
    {
        cout<<"== Book 클래스의 복사 생성자 호출 =="<<endl;
        title=new char[strlen(cpy.title)+1];
        isbn= new char[strlen(cpy.isbn)+1];
        strcpy(title,cpy.title);
        strcpy(isbn,cpy.isbn);
    }
    Book& operator=(const Book& ref) // 대입연산자 오버로딩
    {
        cout<<"== Book 클래스의 대입 연산자 호출 =="<<endl;
        delete []title;
        delete []isbn;
        title=new char[strlen(ref.title)+1];
        isbn= new char[strlen(ref.isbn)+1];
        strcpy(title,ref.title);
        strcpy(isbn,ref.isbn);
        price=ref.price;

        return *this;
    }
    void ShowBookInfo(void)
    {
        cout<<"제 목 : "<<this->title<<endl;
        cout<<"ISBN : "<<this->isbn<<endl;
        cout<<"가 격 : "<<this->price<<endl;
    }
};

class EBook:public Book
{
private:
    char* DRMKey;
public:
    EBook(const char* title,const char* isbn,const int money,const char* DRM):Book(title, isbn, money) // 생성자
    {
        //cout<<"== EBook 클래스의 일반 생성자 호출 =="<<endl;
        DRMKey=new char[strlen(DRM)];
        strcpy(DRMKey,DRM);
    }

    EBook(const EBook& cpy):Book(cpy) //복사 생성자(깊은복사)
    {
        cout<<"== EBook 클래스의 복사 생성자 호출 =="<<endl;
        DRMKey=new char[strlen(cpy.DRMKey)+1];
        strcpy(DRMKey,cpy.DRMKey);
    }

    EBook& operator=(const EBook& ref) // 대입연산자 오버로딩
    {
        cout<<"== EBook 클래스의 대입연산자 호출 =="<<endl;
     //   Book::operator=(ref); // 기초 클래스의 대입연산자 호출
        DRMKey=new char[strlen(ref.DRMKey)+1];
        strcpy(DRMKey,ref.DRMKey);
        return *this;

    }

    void ShowEBookInfo(void)
    {
        ShowBookInfo();
        cout<<"인증키 : "<<DRMKey<<endl;
    }
};

/*
int main(void)
{
    Book book1("좋은 C++","555-12345-890-0",20000);
    Book book2("JavaScript jQuery","123-4567-010-0",35000);
    book1.ShowBookInfo();
    cout<<endl;
    book2.ShowBookInfo();
    cout<<endl<<"====================================="<<endl<<endl;

    book2=book1;

    book1.ShowBookInfo();
    cout<<endl;
    book2.ShowBookInfo();
    cout<<endl<<"====================================="<<endl<<endl;

    Book book3=book2;

    book1.ShowBookInfo();
    cout<<endl;
    book2.ShowBookInfo();
    cout<<endl;
    book3.ShowBookInfo();
    cout<<endl;
    cout<<endl<<"====================================="<<endl<<endl;


}
*/
int main(void)
{
    EBook ebook1("좋은 C++","555-12345-890-1",10000,"fdx9w0i8kiw");
    EBook ebook2("JavaScript jQuery","123-4567-010-0",15000,"edk7w0i7kiw");
    ebook1.ShowEBookInfo();
    cout<<endl;
    ebook2.ShowEBookInfo();
/*
    cout<<endl;

    cout<<"    ebook2=ebook1;"<<endl;
    ebook2=ebook1;

    ebook1.ShowEBookInfo();
    cout<<endl;
    ebook2.ShowEBookInfo();
    cout<<endl;

    cout<<"    EBook ebook3=ebook2;"<<endl;
    EBook ebook3=ebook2;
    ebook3.ShowBookInfo();
*/
    Book book1=ebook1;
    book1.ShowBookInfo();
    ebook2.ShowBookInfo();


    return 0;

}
