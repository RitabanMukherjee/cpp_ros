#include<iostream>

using namespace std;

int main(){

    string color, pluralNoun, celebrity;

    cout<< "Enter a Color: ";
    getline(cin, color);
    cout<<endl;

    cout<< "Enter a Plural Noun: ";
    getline(cin, pluralNoun);
    cout<<endl;

    cout<< "Enter a Celebrity: ";
    getline(cin, celebrity);
    cout<<endl;

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}