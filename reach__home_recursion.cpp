#include<iostream>
using namespace std;
void reachhome(int source, int destination){
    cout<<"Now we are at: "<<source<<endl;
    //Base Case
    if(source == destination){
        cout<<"Bhaaisaab Destination par pahuch gye hai!!"<<endl;
        return ;
    }
    source++;
    reachhome(source,destination);
    
}
int main(){
    int source;
    cout<<"Enter the source: ";
    cin>>source;
    int destination;
    cout<<"Enter the destination: ";
    cin>>destination;

    reachhome(source,destination);


    return 0;
}