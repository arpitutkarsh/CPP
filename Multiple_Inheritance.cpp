#include<iostream>
using namespace std;

class Animal{ //It is Parent class
    public:
    void eat(){
        cout<<"Eating "<<endl;
    }
};
class Human{
    public:
    string color;

    public:
    void seat(){
        cout<<"Eating "<<endl;

        
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human{

};

int main(){
    Hybrid h1;
    h1.seat();
    h1.eat();
    return 0;
}