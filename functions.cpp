#include<iostream>

using namespace std;


void sayHi(string name, int age); //declare function here, before the main() function, IF it is defined after the main() function

int main(){

    sayHi("Rohan", 23);
    sayHi("Tom", 17);
    sayHi("Steve", 45);

    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << endl;
    cout << "You are " << age << endl;
}