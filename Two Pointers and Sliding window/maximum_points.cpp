#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> cp = {1,2,3,4,5,6,1};
    int k = 3;
    int starting = 0;
    int maxsum = 0;
    for(int i = 0; i < k; i++){
        starting += cp[i];
        cout<<"Starting inside the loop "<<starting<<endl;
    }
    cout<<"Starting final value "<<starting<<endl;
    maxsum = starting;
    cout<<"Initial maxsum value: "<<maxsum<<endl;
    int end = cp.size()-1;
    cout<<end<<endl;
    for(int i = k-1; i >= 0; i--){
        starting = starting - cp[i] + cp[end];
        cout<<"Printing starting inside the loop "<<starting<<endl;
        end--;
        maxsum = max(maxsum, starting);
        cout<<"Printing the maxsum inside the loop "<<maxsum<<endl;
    }
    cout<<"Final maxsum value: "<<maxsum<<endl;
    return 0;
}