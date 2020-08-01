#include<iostream>

using namespace std;

int main(){

    int age = 19;
    int *pAge = &age; //pAge is a pointer variable that stores the memory address where the variable age is stored
    double gpa = 2.7;
    double *pGpa = &gpa; //common convention is the add a "p" in front of the pointer name
    string name = "Mike";
    string *pName = &name;

    cout << &age << endl; //prints out the address where the age variable is stored in physical computer memory
    cout << pName << endl;

    cout << *pAge << endl; //Here, the pointer pAge is dereferenced to provide the actual value being held at the physical memory address that it was pointing to
    cout << *&gpa << endl; //Similar dereferencing of the pointer that returns actual variable value being held at memory address
    cout << &*&gpa << endl; //Pointer is referenced here
    return 0;
}