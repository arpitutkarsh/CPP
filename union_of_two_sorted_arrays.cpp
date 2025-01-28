#include<iostream>
#include<vector>
using namespace std;
vector<int> unionoftwoarrays(int a[], int n, int b[], int m){
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            if(ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size() == 0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i < n){
        if(ans.size() == 0 || ans.back() != a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }

    while(j < m){
        if(ans.size() == 0 || ans.back() != b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,6,7};
    int i = 5;
    int j = 5;
    vector<int> ans = unionoftwoarrays(arr1,i,arr2,j);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}