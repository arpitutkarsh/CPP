#include<iostream>
using namespace std;
int sumofArray(int arr[], int size){
    //Specifying the base case which can be if there is no element in the array return 0
    //base case
    if(size <= 0){
        return 0;
    }
    //heading toward the base case that is add the 0th element of the array to the sum
    int sum = 0;//Intializing sum as 0
    sum = sum + arr[size-1];//Here we are adding last element of the array to the sum 
    //after adding the last element of the array to the sum the value of sum becomes the value of last element of the array
    int ans = sumofArray(arr,size-1) + sum;//taking variable answer for recursive relation in whcih we are again passing arr and size but size is passed as size-1;

    return ans;
}
//One more way jo hm bhi soche the
int sumo(int arr[], int n){
    //Base case
    if(n <= 0){//It means that if the size of the array is less than 0(that is no element then return 0)
        return 0;
    }
    int sum = 0;
    sum = sum + arr[0];
    int anssum = sum + sumo(arr+1,n-1);
    return anssum;
    
}
int main(){
    int arr[5] = {24,2,5,1,6};
    int size = 05;

    int ans = sumofArray(arr,size);
    cout<<ans<<endl;
    cout<<"Neeche jis prakar se answer aa rha hai wo mera khud ka way ka answer hai bina kisi ke help ka"<<endl;
    cout<<sumo(arr,5);
    return 0;
}