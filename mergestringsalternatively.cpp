#include<iostream>
using namespace std;
int main(){
    string word1;
    string word2;
    cout<<"Enter the first string ";
    cin>>word1;
    cout<<"Enter the second string ";
    cin>>word2;
    cout<<"Size of first word is "<<word1.length()<<" and size of second string is "<<word2.length()<<endl;
    int n = word1.length();
    int m = word2.length();
    string ans = "";
    int i = 0;
    while(i<n || i<m){
        if(i<n){
            ans = ans+word1[i];
        }
        if(i<m){
            ans = ans+word2[i];
        }
        i++;

    }
    cout<<ans;



    return 0;
}