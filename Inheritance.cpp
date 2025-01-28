#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }
    void setweight(int weight){
        this->weight = weight;
    }
};

class Male : public Human {
    public:
    string color;

    void sleep() {
        cout<<"Male Sleeping"<<endl;
    }

};

int main(){
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.color<<endl;
    obj1.setweight(85);
    cout<<obj1.weight<<endl;

    obj1.sleep();

    

    return 0;
}