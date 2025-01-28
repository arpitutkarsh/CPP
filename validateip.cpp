#include<bits/stdc++.h>
using namespace std;
int validIP(string &str){
    int n = str.size();
    int digit = 0;
    for(int i = 0; i < n; i++){
        if(digit > 255 || (str[i] == '.' && str[i+1] == '.')){
            return 0;
        }
        else if(str[i] != '.'){
            digit = (digit*10) + str[i] - '0';
        }
        else if(str[i] == '.'){
            digit = 0;
        }
    }
    return 1;
}
int main(){
    string str = "12..21";
    int n = str.size();
    cout<<"Size of IP is: "<<n<<endl;
    int digit = 0;
    if(validIP(str)){
        cout<<"The IP is VALID";
    }
    else{
        cout<<"NOT VALID"<<endl;
    }
    
    
    return 0;
}