#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    string s = "testsample";
    map<char, int> mpp;
    for(int i = 0; i < s.length(); i++){
        mpp[s[i]]++;
    }
    for(auto it: mpp){
        cout<<"The first character is: "<<it.first<<endl;
        cout<<"The frequency is: "<<it.second<<endl;
    }
    int max = 0;
    string ans = "";
    for(auto i : mpp){
        if(i.second > max){
            max = i.second;
        }
    }
    cout<<"Max is: "<<max<<endl;
    for(auto j : mpp){
        if(j.second == max){
            ans = ans + j.first;
        }
    }
    sort(ans.begin(), ans.end());

    cout<<"Ans is: "<<ans[0]<<endl;

    return 0;
}