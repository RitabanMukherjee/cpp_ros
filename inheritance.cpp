#include<iostream>

using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout<< "The chef makes yummy chicken" << endl;
        }
        void makeSalad(){
            cout<< "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout<< "The chef makes bbq ribs" << endl;
        }

};

//Inheritance is used to extend one class into a child class which inherits all the parent class' public properties
// Child class can also have its own additional properties
//Through inheritance, the parent's functions can be overridden by the child class
//Parent class is called SuperClass. Child class is called SubClass
class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout<< "The chef makes chicken parm" << endl;
        }
};

int main(){

    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();

    return 0;
}