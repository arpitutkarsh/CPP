#include<iostream>
using namespace std;
int add(int arr1[],int m,int arr2[], int n){
    int i = m-1;
    int j = n-1;
    int carry = 0;
    while(i>=0 && j>=0){
        int value1 = arr[i];
        int value2 = arr[j];

        int sum = value1 + value2 + carry;
        carry = sum % 10;
        sum = sum/10;
        i--;
        j--;
    }
    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum % 10;
        sum = sum/10;
        i--;
    }
    while(j>=0){
        int sum = arr[j] + carry;
        carry = sum % 10;
        sum = sum/10;
        j--;
    }
    while(carry!=0){
        int sum = carry;
        int carry = sum/10;
        int sum = sum%10;
    }
}
int main(){


    return 0;
}