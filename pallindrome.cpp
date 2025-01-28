#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
bool pallindrome(char ch[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        if(ch[start] != ch[end]){
            return 0;
            
        }
        else{
            start++;
            end--;
        }
        
        
    }
    return 1;
    

}
int main(){
    char ch[20];
    cout<<"Enter a character to check if the character is a pallindrome or not "<<endl;
    cin>>ch;
    int n = getlength(ch);
    cout<<pallindrome(ch,n);


    return 0;
}