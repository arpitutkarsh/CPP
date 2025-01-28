//PROBLEM NUMBER 860 - LEETCODE
#include<iostream>
#include<vector>
using namespace std;
bool lemonadeChange(vector<int>& bills) {
    int five_dollar = 0;
    int ten_dollar = 0;
    if(bills[0] != 5){
        return false;
    }

    for(int i = 0; i < bills.size(); i++){
        if(bills[i] == 5){
            five_dollar++;
        }
        else if(bills[i] == 10){
            ten_dollar++;
            if(five_dollar > 0){
                five_dollar--;
            }
            else{
                return false;
            }
                
        }
        else{
            if(five_dollar > 0 && ten_dollar > 0){
                five_dollar--;
                ten_dollar--;
            }
            else if(five_dollar > 2 ){
                five_dollar -= 3;
            }
            else{
                return false;
            }
        }

    }
    return true;
}
int main(){
    vector<int> arr = {5,5,5,10,20};
    if(lemonadeChange(arr)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}