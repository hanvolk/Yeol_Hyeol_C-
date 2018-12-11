#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE=price;
        numOfApples=num;
        myMoney=money;
    }

    int SaleApples(int money)
    {
        if(money<0)
        {
            cout<<"���� : �Ǹűݾ��� 0 ���� Ŀ�� �մϴ�."<<endl;
            return 0;
        }
        int num=money/APPLE_PRICE;
        numOfApples-=num;
        myMoney+=money;
        return num;
    }

    void ShowSalesResult()
    {
        cout<<"���� ��� : "<<numOfApples<<endl;
        cout<<"�Ǹ� ���� : "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer
{
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money)
    {
        myMoney=money;
        numOfApples=0;
    }

    bool BuyApples(FruitSeller& seller, int money)
    {
        if(money<0)
        {
            cout<<"�ݾ��� 0���� ���� �� �����ϴ�. "<<endl;
            return false;
        }

        numOfApples=seller.SaleApples(money);
        myMoney-=money;
        return true;
    }

    void ShowBuyResult()
    {
        cout<<"���� �ܾ� : "<<myMoney<<endl;
        cout<<"��� ���� :"<<numOfApples<<endl;
    }
};

int main(void)
{
    FruitSeller seller;
    seller.InitMembers(1000,20,0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"���� �Ǹ����� ��Ȳ"<<endl;
    seller.ShowSalesResult();
    cout<<"���� �������� ��Ȳ"<<endl;
    buyer.ShowBuyResult();
    return 0;
}