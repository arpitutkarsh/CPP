#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {10,5,2,7,1,9};
    int k = 15;
    int max = 0;
    int i = 0;
    int sum = 0;
    while(i < arr.size()){
        int count = 0;
        int j = i;
        sum = sum + arr[j];
        if(sum < k){
            count++;
            j++;
        }
        else if(sum > k){
            count = 0;
            i++;
            j = i;
            sum = 0;
        }
        cout<<sum<<endl;
        cout<<"Ar"<<count<<endl;
        i++;
    }
    return 0;
}