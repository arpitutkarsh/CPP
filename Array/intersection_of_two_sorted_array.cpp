#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection_brute(vector<int>& arr1, vector<int>& arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int visited[n2] = {0};
    vector<int> ans;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j] && visited[j]==0){
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }

            if(arr2[j] > arr1[i]){
                break;
            }
        }
    }
    return ans;

}

vector<int> intersection_optimized(vector<int>& arr1, vector<int>& arr2){
    int i = 0;
    int j = 0;
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;
    while(i < n && j < m){
        if(arr1[i] > arr2[j]){
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> arr1 = {1,2,2,3,3,4,5,6};
    vector<int> arr2 = {2,3,3,5,6,6,7};
    //vector<int> intersection_array = intersection_brute(arr1, arr2);
    vector<int> ans = intersection_optimized(arr1, arr2);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}