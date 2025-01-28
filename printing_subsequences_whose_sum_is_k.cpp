#include<iostream>
#include<vector>
using namespace std;
void print_subsequence(int index, vector<int> &ds, int s, int sum, int arr[],int n){
    if(index == n){
        if(s == sum){
            for(auto it : ds){
                cout << it <<" ";
            }
            cout<<endl;
        }
        return;
    }
    //pick condition
    ds.push_back(arr[index]);
    s += arr[index];
    print_subsequence(index+1, ds, s, sum, arr, n);
    s -= arr[index];
    ds.pop_back();
    //not pick condition 
    print_subsequence(index+1, ds, s, sum, arr, n);
}
int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    print_subsequence(0, ds, 0, sum, arr, n);
    return 0;
}