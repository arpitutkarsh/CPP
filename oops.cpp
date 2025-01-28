#include<iostream>
//#include "Hero.cpp" can be used to include the class file defined in the other file of the folder
using namespace std;

class Hero {
    private: //It is used to access the data members anywhere inside or outside the class

    int health;
    //private: //It means that the data members can be accessed inside the class only.
    public:
    char level;
    //Default Constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
    }
    //Parameterized Constructor
    Hero(int health){
        cout<<"this keyword"<<endl;
        //health = health; we can get confused to solve this issue we have this keyword whhich stores the address of current object
        this -> health = health;
    }
    void print(){
        cout<<level<<endl;
    }

    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
};

int main(){
    Hero h1(10);
    cout<<"Address of Hero h1"<<&h1<<endl;
    h1.gethealth();
    /*
    //Static Memory allocation
    Hero h1;
    cout<<"Size of object h1 is "<<sizeof(h1)<<endl;
    cout<<"H1 health is "<< h1.gethealth() <<endl;
    h1.setHealth(70);
    cout<<"H1 health is "<< h1.gethealth() <<endl;
    cout<<"Level is: "<<h1.level<<endl;

    //Dynamic Memory Allocation
    Hero *h = new Hero;
    cout<<"Size of object h1 is "<<sizeof(*h)<<endl;
    cout<<"H1 health is "<< (*h).gethealth() <<endl;
    (*h).setHealth(70);
    cout<<"H1 health is "<< (*h).gethealth() <<endl;
    cout<<"Level is: "<<(*h).level<<endl;

    //There is one other alternative is by using ->
    cout<<"Size of object h1 is "<<sizeof(*h)<<endl;
    cout<<"H1 health is "<< h -> gethealth() <<endl;
    h-> setHealth(70);
    cout<<"H1 health is "<< h-> gethealth() <<endl;
    cout<<"Level is: "<< h->level<<endl;

    
    
    /*
    //Creation of an Object
    Hero h1;
    //h1.health = 35;
    h1.level = 'A';
    
    //CHecking size of the Object H1 
    cout<<"Size of object h1 is "<<sizeof(h1)<<endl;
    cout<<"H1 health is "<< h1.gethealth() <<endl;
    h1.setHealth(70);
    cout<<"H1 health is "<< h1.gethealth() <<endl;
    //cout<<"Health is: "<<h1.health <<endl;
    cout<<"Level is: "<<h1.level<<endl;
    */
    return 0;
}