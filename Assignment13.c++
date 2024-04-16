#include<iostream>
using namespace std;
class resturant{
    private:
    int starter;
    public:
    resturant(){starter=5;}
    int getStarterQty(){
        return starter;
    }
};
class desert:public resturant{
    private:
    int sweets;
    public:
    desert(){sweets=2;}
    int getSweetsQty(){return sweets;}
};
class bill:public desert{
    private:
    int starterPrice;
    int sweetsPrice;
    public:
    bill(){
        starterPrice=300;
        sweetsPrice=200;

    }
    void print(){
        cout<<getStarterQty()*starterPrice+getSweetsQty()*sweetsPrice<<endl;
    }
};
int main(){
    bill obj;
    obj.print();
    return 0;
}