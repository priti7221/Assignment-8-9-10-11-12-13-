#include<iostream>
using namespace std;
class integer{
   
    public:
    int sumOfSeries(int n){
    int totalSum =0;
    
    for(int i=1;i<=n;i++){
        totalSum += (i*(i+1))/2;
       
    }
      return totalSum;

    }
};

int main(){
    integer obj1;
    int n;
     cout<<"Enter a positive intezer"<<endl;
    cin>>n;
    int result=obj1.sumOfSeries(n);
    cout<<"Sum of series:"<<result<<endl;
    return 0;
}