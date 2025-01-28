#include<iostream>
using namespace std;
int main(){
    int arr[8] = {4,3,2,7,8,2,3,1};
    int a = 0;
    int counter[a];
    for(int i =0; i<8; i++){
        for(int j=i+1; j<8; j++){
            //cout<<"("<<arr[i]<<","<<arr[j]<<")";
            if(i+1<8){
                if(((arr[i])^(arr[j])) == 0)
                {
                    cout<<"("<<arr[i]<<","<<arr[j]<<"),"<<(arr[i]^arr[j])<<endl;
                    counter[a] = arr[i];
                    a++;
    
                }
            }
            
            
            
            
            


            
            
            
        }
        
    }
    for(int i = 0; i<a; i++){
        cout<<counter[i]<<endl;;
    }




    return 0;
}