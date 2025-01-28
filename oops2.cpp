#include<iostream>
#include<cstring>
using namespace std;

//#include "Hero.cpp";
class Hero{

    // Creating Class

    //public:

    //string name;

    private:

    int health;

    public:

    char *name;

    char level;
    static int timeTocomplete;

    static int random() {
        return timeTocomplete ;
    }
    //Creating Default Constructor
    Hero() {
        cout<<"Default Constructor called"<<endl;
        name = new char[100];
        
    }

    //Creating Parameterised Constructor
    Hero(int health){
        cout<< "Address of h1 using this keyword= "<<this<<endl;
        this -> health = health;
    }

    void print(){
        cout<<"Name is: "<<this -> name<<endl;
        cout <<"Health is: "<<this -> health <<endl;
        cout<<"Level is:  "<<this -> level<<endl;
    }
    
    //Creating Copy constructor
    Hero(Hero& temp){
        cout<<"Calling Copy Constructor "<<endl;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this ->name = ch;  
        this -> health = temp.health;
        this -> level = temp.level;

        cout << temp.health <<endl;
        cout << temp.level <<endl;

        cout<<"Copy COnstructor ends here "<<endl;
    }
    

    //Creating another Parameterised COnstructor
    Hero(int health, char level){

        //Ye ek dusra constructor hai jo ki naya banaye hai
        this -> level = level;
        this -> health = health;

        cout<<"For new constructor Level is: "<<level <<endl;
        cout<<"FOr new constructor Health is: "<<health<<endl;
    }

    int gethealth(){
        return health;
    }
    
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char le){
        level = le;
    }

    void setname(char name[]){
        strcpy(this->name, name);
    }
    ~Hero() {
        cout<<"Destructor bulaya gaya"<<endl;
    }
};

int Hero ::timeTocomplete = 5;

int main(){

    cout << Hero::random()<<endl;
    cout << Hero::timeTocomplete<<endl; 




    /*
    //Static allocation
    Hero a;

    //Dynamic ALlocation

    Hero *b = new Hero();
    //MAnually destructor called
    delete b;
    
    

    /*

    Hero h1;
    h1.sethealth(12);
    h1.setlevel('D');
    char name[6] = "Arpit";
    h1.setname(name);

    h1.print();



    //using default copy constructor

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'D';

    h1.print();
    h2.print();

    h1 = h2;
    cout<<"Printing again"<<endl;
    h1.print();
    h2.print();

    /*

    Hero Dharmesh(78, 'C');

    //COpy Constructor
    Hero Karmesh(Dharmesh); // IT means that the health of Karmesh is equal to health of Dharmesh and the level of karmesh is equal to the level of Dharmesh
    Karmesh.print();
    Dharmesh.print();
    */
    //In simple term we can say that
    //Karmesh.health = Dharmesh.health;
    //Karmesh.level = Dharmesh.level;


    //Dharmesh.sethealth(78);
    //Dharmesh.setlevel('C');
    /*
    //Creating Object of type Hero

    Hero h1(10); // Static Creation   and Constructor called
    cout<<"Hello"<<endl;

    //proving this is a pointer
    cout<< "Address of h1 using & operator= "<<&h1<<endl;
    


    //Creating object of type Hero dynamically

    Hero *h2 = new Hero(18); //Its memory is dynamically allocated in Heap          Constructor called

    Hero h4(75, 'B');
    Hero h5(21, 'D');
    //h1.name = "Ramesh";

    //h1.health = 20;

    //h1.level = 'C';

    h1.sethealth(70); //Using setter
    h1.setlevel('A'); //Using setter
    (*h2).setlevel('C');
    (*h2).sethealth(65);
    cout<<sizeof(h1)<<endl;
    cout<<"Health is "<<h1.gethealth()<<endl; //Using getter
    cout<<"Level is "<<h1.getlevel()<<endl; //Using getter

    cout<<sizeof(*h2)<<endl;
    cout<<"HEalth of h2 is "<<(*h2).gethealth()<<endl;
    cout<<"Level of h2 is "<<(*h2).getlevel()<<endl;

    //We can also use 

    cout<<"HEalth of h2 using -> is "<<h2->gethealth()<<endl;
    cout<<"Level of h2 using -> is "<<h2->getlevel()<<endl;

    //cout<<"Name is: "<<h1.name<<endl;

    //cout<<"Health is: "<<h1.health<<endl;

    //cout<<"Level is: "<<h1.level<<endl;
    */
    return 0;
}