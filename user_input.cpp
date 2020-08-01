#include<iostream>

using namespace std;

int main(){

    //int age;
    //cout << "Enter your age" << endl;
   // cin >> age;
    //cout << endl;
    //cout << "You are " << age << " years old" << endl;

    string name;
    cout << "Enter your name" << endl;
    getline(cin, name); //to get an entire string of text, but, for char use standard cin command

    cout << "Your name is " << name << endl;

    return 0;
}