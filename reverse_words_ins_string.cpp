#include<iostream>
using namespace std;
int main(){
    string s = "the sky is blue";
    int n = s.size();
    cout<<"Size of string is: "<<n<<endl;
    int i = 0;
    string ans = "";
    while(i < n){
        string temp = "";
        while(s[i] == ' ' && i < n){
            i++;
        }
        while(s[i] != ' ' && i < n){
            temp = temp + s[i];
            i++;
        }
        cout<<"Value of temp is: "<<temp<<endl;
        if(temp.size()>0){
            if(ans.size() == 0){
                ans = ans + temp;
            }
            else if(ans.size() != 0){
                ans = temp + " "+ ans;
            }
        }

    }
    cout<<ans;
    return 0;
}