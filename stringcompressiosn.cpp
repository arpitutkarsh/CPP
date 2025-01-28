#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> chars = {'a', 'b', 'b','b','b','b','b','b','b','b','b', 'c', 'c', 'c','c'};
    vector<char> ans;
    int count = 0;
    for(int i = 0; i < chars.size(); i++){
        char ele;
        if(count == 0){
            //cout<<"Here count is: "<<count<<endl;
            ele = chars[i];
            //cout<<"Now element is: "<<ele<<endl;
            //cout<<"Here i is: "<<i<<endl;
            count++;
            //cout<<"Now count is: "<<count<<endl;
            //cout<<"Next statement: "<<endl;
            ans.push_back(chars[i]);
        }
        else if(chars[i] == ele){
            //cout<<"Here the value of character is: "<<chars[i]<<endl;
            count++;
            //cout<<"Here the value of count is: "<<count<<endl;
            //cout<<"Here i is: "<<i<<endl;
            //cout<<"Here the value of element is: "<<ele<<endl;
            //cout<<"Next statement is: "<<endl;
        }
        else if(chars[i] != ele){
            if(count > 1){
                string str = to_string(count);
                for(char c : str){
                    ans.push_back(c);
                }
            }
            //ans.push_back(count + '0');
            //cout<<"Before the second elseif statement the value of count was: "<<count<<endl;
            count = 1;
            //cout<<"Now count is: "<<count<<endl;
            //cout<<"Here i is: "<<i<<endl;
            //cout<<"Below changing the element's value it was: "<<ele<<endl;
            ele = chars[i];
            ans.push_back(ele);
            //cout<<"After changing element is: "<<ele<<endl;
            //cout<<"Next statement is: "<<endl;
        }
        
    }
    //cout<<"Now toh count dikhao "<<count<<endl;
    if(count > 1){
        string str = to_string(count);
        for(char c: str){
            ans.push_back(c);
        }
    }
    cout<<"Ans: ";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    

    return 0;
}