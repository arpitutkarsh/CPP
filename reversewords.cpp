#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "i.like.this.program.very.much";
    cout<<s.size()<<endl;
    for(int i=0; i < s.size(); i++){
        if(s[i] == '.'){
            i++;
        }
        //cout<<s[i]<<endl;
    }
    vector<int> arr = {3,4,5,6};
    cout<<arr.size()<<endl;
    
    return 0;
}