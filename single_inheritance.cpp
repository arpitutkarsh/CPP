#include<iostream>
using namespace std;
class Animal{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"Speaking: "<<endl;
    }
};

class Dog: public Animal{
    public:
    void Speaking(){
        cout<<"Bhaw Bhaw"<<endl;
    }

};
int main(){
    Dog d;
    d.speak();
    d.Speaking();
    return 0;
}