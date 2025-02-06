#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k){
    int n = s.size();
    int left = 0;
    int right = 0;
    int max_freq = 0;
    int max_length = 0;
    int hash[26] = {0};
    while(right < n){
        //storing frequency
        hash[s[right] - 'A']++;
        //checking the frequency
        if(hash[s[right] - 'A'] > max_freq){
            max_freq = hash[s[right] - 'A'];
        }

        if((right - left + 1) - max_freq > k){ //trimming left
            hash[s[left] - 'A']--;
            left--;
        }
        max_length = max(max_length, right - left + 1);
        right++;
    }
    return max_length;
}
int main(){
    string s = "ABAB";
    int k = 2;
    cout<<characterReplacement(s,k);
    return 0;
}