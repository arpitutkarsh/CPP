/*
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:Find the leftmost 
occurrence of the substring part and remove it from s.Return s after removing all occurrences of part.A substring is a contiguous sequence of
characters in a string.
Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".
*/
#include<iostream>
using namespace std;
string removealloccurrences(string s, string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter the main string"<<endl;
    cin>>s;
    string part;
    cout<<"Enter the part of the string "<<endl;
    cin>>part;

    cout<<removealloccurrences(s,part);

}
