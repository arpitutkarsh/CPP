#include<bits/stdc++.h>
using namespace std;
vector<int> majority_element_brute(vector<int>& arr){
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(ans.size() == 0 || ans[0] != arr[i]){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(arr[j] == arr[i]){
                    count++;
                }
            }
            if(count > n/3){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size() == 2) break;
    }
    return ans;
}

vector<int> better_approch(vector<int>& arr){
    vector<int> ans;
    map<int, int> mpp;
    int mini = ((arr.size())/3)+1;
    for(int i = 0; i < arr.size(); i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]] == mini){
            ans.push_back(arr[i]);
        }
        if(ans.size() == 2) break;
    }
    sort(ans.begin(), ans.end());
    return ans;
} 

vector<int> majority_element_optimal(vector<int>& arr){
    int n = arr.size();
    int count1 = 0, count2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(count1 == 0 && ele2 != arr[i]){
            count1 = 1;
            ele1 = arr[i];
        }
        else if(count2 == 0 && ele1 != arr[i]){
            count2 = 1;
            ele2 = arr[i];
        }
        else if(arr[i] == ele1) {
            count1++;
        }
        else if(arr[i] == ele2){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    vector<int> ans;
    count1 = 0;
    count2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele1) count1++;
        if(arr[i] == ele2) count2++;
    }
    int mini = int(arr.size()/3)+1;
    if(count1 >= mini){
        ans.push_back(ele1);

    }
    if(count2 >= mini){
        ans.push_back(ele2);
    }
    return ans;
}
int main(){
    vector<int> arr = {11,33,33,11,33,11};
   // vector<int> ans = majority_element_brute(arr);
    //vector<int> ans = better_approch(arr);
    vector<int> ans = majority_element_optimal(arr);
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}