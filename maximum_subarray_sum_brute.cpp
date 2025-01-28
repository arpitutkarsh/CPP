#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr= {5,4,-1,7,8};
    /*
    int maxsum = 0;
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
        for(int j = i; j < arr.size(); j++){
            sum = sum + arr[j];
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum<<endl;
    
   //Now using Kadane's Algorithm
   int sum = 0;
   int maxsum = INT_MIN;
   for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum > maxsum){
            maxsum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
   }
   cout<<maxsum<<endl;
   */
   //Kadane Algorithm can't be used to solve this problem instead we will be using prefix and suffix to solve this problem
   int prefix = 1; //This is the prefix which will be multiplying array's elements from index 0
   int suffix = 1; //This is the suffix which will be multiplying array's elements from end
   int ans = INT_MIN; //Will be used to store the ans
   for(int i = 0; i < arr.size(); i++){
        if(prefix == 0){
            prefix = 1;   //We are doing this for the case if the i encounters 0, the prefix after multiplication will become 0 which on multiplication with any other element remains 0 we will be doing the same for suffix also
        }
        if(suffix == 0){
            suffix = 1;
        }
        prefix = prefix * arr[i];
        suffix = suffix * arr[arr.size()-i-1];
        ans = max(ans, max(prefix,suffix));
   }
   cout<<ans<<endl;

   return 0;
}