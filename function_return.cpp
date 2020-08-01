#include<iostream>

using namespace std;

double cube(double num){
  return num * num *num; //return tells C++ that it is done executing the code in that function. 
                        //Anything after return in a function won't get executed
   
}

int main(){

    cout << cube(5.0) << endl;

    return 0;
}