#include<iostream>

using namespace std;

int main(){

    bool isMale = true;
    bool isTall = true;

    if(isMale || isTall){
        cout<<"You are a tall male"<<endl;
    } else if (!isMale && !isTall) {
        cout << "You are not a tall male" << endl;
    } else {
        cout << "WHO ARE YOUUUUUU??????" << endl;
    }

    return 0;
}