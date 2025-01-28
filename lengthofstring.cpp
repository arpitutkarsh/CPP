#include<iostream>
using namespace std;
//reverse string
void reverse(char name[], int n){
    int start = 0;
    int end = n - 1;
    while(start<end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
}
int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter name "<<endl;
    cin>>name;
    int a = getlength(name);
    cout<<"Length of your name is "<<a<<endl;
    reverse(name,a);
    cout<<"Reverse of your name is "<<name<<endl;



    return 0;
}