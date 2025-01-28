#include<iostream>
using namespace std;
int main(){
    int prices[5] = {7,6,4,3,1};
    int min = INT32_MIN;
    cout<<"Minimum value is "<<min<<endl;
    for(int i = 0; i <5; i++){
        cout<<"The value of i is "<<i<<endl;
        for(int j = i+1; j<5; j++){
            cout<<"The value of j is "<<j<<endl;
            cout<<"Value of i and j together is "<<i<<j<<endl;
            int profit = prices[j] - prices[i];
            cout<<"Profit is "<<profit<<endl;
            if(profit > min){
                min = profit;
                cout<<"Minimum is "<<min<<endl;
            }
        }
    }
    if(min<=0){
        cout<<"0"<<endl;
    }
    else{
        cout<<"Ans="<<min<<endl;
    }
    return 0;
}