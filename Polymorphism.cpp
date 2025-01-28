#include<iostream>
using namespace std;
class parent{
    public:
    /*
    void sayHello(){ //function overloading
        cout <<" Hello Arpit bhaai "<<endl;
    }
    void sayHello(string a){ //function overloading
        cout <<" Hello Arpit bhaai "<<endl;
    }
    */
   /*
   public:
   int a;
   int b;
    //operator overloading
    int add(){
        return a+b;
    }
    void operator+ (A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output = "<<value2-value1<<endl;


    }
    */
   //run time polymorphism
   void show(){
    cout<<"Inside Parent Class "<<endl;
   }

};
class subclass1 : public parent{
    public:
    void show(){
        cout<<"Inside subclass 1"<<endl;
    }
};
class s2 : public parent{
    public:
    void show(){
        cout<<"Inside subclass2"<<endl;
    }
};
int main(){
    /*
    A a1,a2;
    a1.a = 4;
    a2.a = 7;
    a1+a2;
    */
   subclass1 o1;
   s2 o2;
   o1.show();
   o2.show();

    return 0;
}