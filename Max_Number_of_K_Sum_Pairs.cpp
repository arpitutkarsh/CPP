#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    vector<int> arr1 = {1,2,3,4};
    int i = 0;
    int j = i+1;
    int count = 0;
    while(j < arr1.size()){
        cout<<"1. The value of i is: "<<i<<" and the value of j is: "<<j<<endl;
        int sum = arr1[i] + arr1[j];
        cout<<"2. The value of sum is: "<<sum<<endl;
        if(sum == k){
            arr1.erase(arr1.begin() + i);
            arr1.erase(arr1.begin() + j);
            cout<<"3. Now the array is: ";
            print(arr1);
            i++;
            count++;
            cout<<"4. The value of count is: "<<count<<endl;
            cout<<"5. The value of i is: "<<i<<" and the value of j is: "<<j<<endl;
        }
        cout<<"6. The value of count is: "<<count<<endl;
        cout<<"7. The value of i is: "<<i<<" and the value of j is: "<<j<<endl;
        cout<<"8. The value of sum is: "<<sum<<endl;
        cout<<"9. The value of i is: "<<i<<" and the value of j is: "<<j<<endl;
        cout<<count<<endl;
        j++;
    }
    cout<<"COUNT "<<count<<endl;

    return 0;
}