/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
*/
#include<iostream>
using namespace std;

string removealladjacentduplicates(string s){
    string ans = "";
    int i = 0;
    while(i < s.length()){
        if(ans.length() > 0 && ans[ans.length() - 1] == s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter the string you want to check for ";
    cin>>s;

    cout<<removealladjacentduplicates(s)<<endl;
    

    return 0;
}