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
            cout<<"오류 : 판매금액은 0 보다 커야 합니다."<<endl;
            return 0;
        }
        int num=money/APPLE_PRICE;
        numOfApples-=num;
        myMoney+=money;
        return num;
    }

    void ShowSalesResult()
    {
        cout<<"남은 사과 : "<<numOfApples<<endl;
        cout<<"판매 수익 : "<<myMoney<<endl<<endl;
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
            cout<<"금액은 0보다 작을 수 없습니다. "<<endl;
            return false;
        }

        numOfApples=seller.SaleApples(money);
        myMoney-=money;
        return true;
    }

    void ShowBuyResult()
    {
        cout<<"현재 잔액 : "<<myMoney<<endl;
        cout<<"사과 갯수 :"<<numOfApples<<endl;
    }
};

int main(void)
{
    FruitSeller seller;
    seller.InitMembers(1000,20,0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"과일 판매자의 현황"<<endl;
    seller.ShowSalesResult();
    cout<<"과일 구매자의 현황"<<endl;
    buyer.ShowBuyResult();
    return 0;
}
