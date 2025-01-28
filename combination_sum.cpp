#include<iostream>
#include<vector>
using namespace std;
void combination_sum(int index, int target, vector<int> arr, vector<vector<int>>& ans, vector<int>& ds){
    //BASE CASE
    //The base case will be if initial index reaches the size of the array the recursion will be over
    if(index == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return ;
    } 
    //PICK UP INDEX CODE
    if(arr[index] <= target){
        ds.push_back(arr[index]);
        combination_sum(index, target - arr[index], arr, ans, ds);
        ds.pop_back();
    }
    combination_sum(index+1, target, arr, ans, ds);

}
vector<vector<int>> findCombination(vector<int>& candidates, int target){
    vector<vector<int>> ans;
    vector<int> ds;
    combination_sum(0, target,candidates, ans, ds);
    return ans;
}

int main(){
    vector<int> arr = {2,3,1,5,4};
    int target = 15;
    vector<vector<int>> ans = findCombination(arr, 15);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans.size(); j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}