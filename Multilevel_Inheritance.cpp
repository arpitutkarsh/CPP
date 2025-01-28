#include<iostream>
using namespace std;
class Animal{ //It is Parent class
    public:
    void eat(){
        cout<<"Eating "<<endl;
    }
};

class Dog: public Animal{  //Child CLass
    public:
    void bark(){
        cout<<"Barking "<<endl;
    }

};

class BabyDog: public Dog{
    public:
    void weep(){
        cout<<"Weeping"<<endl;
    }
};

int main(){
    BabyDog d1;
    d1.bark();
    d1.eat();
    d1.weep();
    return 0;
}