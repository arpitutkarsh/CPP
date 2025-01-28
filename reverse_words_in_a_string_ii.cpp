#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string a = "Let's take LeetCode contest";
    string ans = "";
    string temp = "";
    for(int i = 0; i < a.length(); i++){
        
        if(a[i] != ' '){
            temp = temp + a[i];
            cout<<"Adding i in temp: "<<temp<<endl;
        }
        else if(a[i] == ' ' || a[i+1] == '\0'){
            reverse(temp.begin(), temp.end());
            cout<<"Now the temporary string is "<<temp<<endl;
            if(ans.size() == 0){
                ans = ans + temp;
            }
            else{
                ans = ans +" "+ temp;
                cout<<"Answer is: "<<ans<<endl;
            }
            temp = "";
        }
        
        
        
        
        
        
        
    }
    reverse(temp.begin(), temp.end());
        if(ans.size() == 0){
        ans = ans + temp;
    }
    else{
        ans = ans + " " + temp;
    }
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}