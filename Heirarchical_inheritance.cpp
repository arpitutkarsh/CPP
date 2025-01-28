#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"Inside of functiion A"<<endl;
    }
};
class B: public A{
    public:
    void printB(){
    cout<<"Inside of functiion AB"<<endl;
    };
};
class Cot: public A{
    public:
    void funct(){
    cout<<"Inside of functiion AC"<<endl;
    }
};


int main(){
    A a1;
    a1.print();
    B b1;
    b1.print();
    b1.printB();
    Cot c;
    c.funct();
    c.print();
    
    

    return 0;
}