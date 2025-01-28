#include<iostream>
using namespace std;
char getMax(string s){
    int chararr[26] = {0};
    for(int i = 0; i < s.length(); i++){
        int number = 0;
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        chararr[number]++;

    }
    int max = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(max < chararr[i]){
            ans = i;
            max = chararr[i];
        }
    }
    return 'a' + ans;
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;

    cout<<getMax(s);

    return 0;
}