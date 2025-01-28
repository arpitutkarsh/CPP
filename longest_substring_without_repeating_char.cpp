#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aabcds";
    for(int i = 0; i < s.length(); i++){
        map<char, int> mpp;
        for(int j = i; j < s.length(); j++){
            mpp[s[j]]++;
        }
        for(auto it: mpp){
            cout<<it.first<<" "<<it.second <<" ";
        }
        cout<<endl;
    }
        
    
    
    
    
    return 0;
}