#include<iostream>
#include<math.h>
#define value_of_pi 3.14 //Declaring macro
#define limit 80
//Second type of macro declaration
#define AREA(l,b) (l*b)
//Object like MACROS
#define DATE 5
#define MONTH "January"
#define YEAR 2024
using namespace std;
//CHAIN MACROS
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138000
//MULTILINE MACROS
#define MLM 1, \
            2, \
            3
//function like macro
#define minimum(a,b) (((a) < (b)) ? (a) : (b))
//IN this program we will be learning about macro
//A macro is a piece of code in a program that is replaced by the value of macro
int main(){
    //Here we are using formula pi r square
    int r = 8;
    int t = 5;
    double area = 3.14 * pow(r,2);
    cout<<"The area is: "<<area<<endl;
    //Now we will be first initializing the value of pi
    double pi =3.14;
    double newarea = pi * r * r;
    cout<<"Now the area is: "<<newarea<<endl;
    //Now we will be using MACRO for the value of pi
    double newnewarea = value_of_pi * t * t;
    cout<<"The new new area is: "<<newnewarea<<endl;
    cout<<"Spped limit is: "<<limit<<"km/hr"<<endl;
    int length = 7;
    int breadth = 8;
    cout<<"The area of something with length 7 and breadth 8 is: "<<AREA(length,breadth)<<endl;
    cout<<"Todays DATE is: "<<DATE<<"/"<<MONTH<<"/"<<YEAR<<endl;
    cout<<"I have "<<FOLLOWERS<<" on my instagram"<<endl;
    int arr[] = {MLM};
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The minimum between 3 and 4 is: "<<minimum(3,4)<<endl;
    return 0;
}