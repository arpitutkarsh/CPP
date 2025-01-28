#include<bits/stdc++.h>
using namespace std;
string firstnonrepe(string s){
    //We need an unordered map to stre the count of each character
    unordered_map<char, int> count;
    //We also need a Queue to insert the element in it after increasing the count
    queue<char> q;
    string ans = "";
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        count[ch]++;
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}
int main(){
    string s = "aabc";
    string ans = firstnonrepe(s);
    cout<<ans<<endl;
    return 0;
}