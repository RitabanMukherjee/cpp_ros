#include<iostream>

using namespace std;

int main(){
    cout<<"Giraffe Academy\n";
    cout<<"Hello\n";

    string phrase = "Giraffe Academy";
    cout << phrase.length() << endl;
    cout << phrase[2] << endl;

    phrase[0] = 'B';
    cout<< phrase <<endl;

    cout << phrase.find("Academy", 0) << endl;

    cout << phrase.substr(8, ) << endl;

    return 0;
}