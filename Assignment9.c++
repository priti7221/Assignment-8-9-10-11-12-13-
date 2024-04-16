#include<iostream>
using namespace std;
class demo{
    private:
    float salary;
    public:
    demo(){}
    demo(float S){
        salary=S;
    }
    void display(){
       cout<<salary<<endl;
    }
    float friend operator+(float S,demo obj){
        return S+obj.salary;
    }
    
};
int main(){
    demo obj1(165.2f);
    demo obj2=155.2f+obj1;
    obj2.display();
    return 0;
}