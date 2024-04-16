#include <iostream>
using namespace std;
class smallUnit{
    int inch;
    public:
    void showdata(){
        cout<<inch<<endl;

    }
    smallUnit(int i){
        inch=i;
    }
    int getinch(){return inch;}
};
class largeUnit{
    int feet;
    public:
    largeUnit(){
        feet=0;

    }
    largeUnit(smallUnit obj2){
        int x;
        x=obj2.getinch();
        feet=x/12;
    }
    void showdata(){cout<<feet<<endl;}
};
int main(){
    smallUnit obj1(56);
    largeUnit obj2;
    obj2=obj1;
    obj1.showdata();
    obj2.showdata();
    return 0;
}