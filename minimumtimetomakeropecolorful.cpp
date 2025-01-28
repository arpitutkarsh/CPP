#include<iostream>
using namespace std;
#include<vector>
int main(){
    /*
    Alice has n balloons arranged on a rope. You are given a 0-indexed string colors where colors[i] is the color of the ith balloon.Alice wants the rope to be colorful. She does not want two consecutive balloons to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it colorful. You are given a 0-indexed integer array neededTime where neededTime[i] is the time (in seconds) that Bob needs to remove the ith balloon from the rope.
    Return the minimum time Bob needs to make the rope colorful.
    */
    string colors = "abaac";
    vector<int> neededTime = {1,2,3,4,5};
    int time = 0;
    int previous = 0;
    for(int i = 1; i<colors.size(); i++){
        if(colors[i] != colors[previous]){
            previous = i;
        }
        else{
            if(neededTime[i] < neededTime[previous]){
                time = time+neededTime[i];
                previous = i;
            }
            else{
                time = time+neededTime[previous];
            }

        }
    }
    
    cout<<"The time is "<<time;



    return 0;
}