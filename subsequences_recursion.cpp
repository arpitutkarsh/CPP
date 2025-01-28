#include<iostream>
#include<vector>

using namespace std;
void subsequence(int index, vector<int>& ds, int arr[], int n){
    if(index == n){
        for(auto it : ds){
            cout<<it<<" ";
            
        }
        if(ds.size() == 0){
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return ;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[index]);
    subsequence(index+1, ds, arr, n);
    ds.pop_back();
    //not pick or not take condition too not add that element in the subsequence
    subsequence(index+1, ds, arr, n);

}
int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ans;
    subsequence(0,ans,arr,n);
    return 0;
}