#include<iostream>
using namespace std;
void reverse(string& name, int start, int end){
    //Base case
    //Here base case will be that if the start of the string is greater than end of the string return 
    if(start > end){
        return ;
    }

    swap(name[start], name[end]);
    start++;
    end--;
    reverse(name, st art, end);
}
int main(){
    string love = "name";
    cout<<endl;
    reverse(love, 0, love.length()-1);
    cout<<endl;
    cout<< love <<endl;
    return 0;
}