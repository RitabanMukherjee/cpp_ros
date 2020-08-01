#include<iostream>

using namespace std;

int main(){

    double num1, num2, result;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout<<endl;

    cout << "Enter operator: ";
    cin >> op;
    cout<<endl;

    cout << "Enter second number: ";
    cin >> num2;
    cout<<endl;

    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-') {
        result = num1-num2;
    } else if(op == '*') {
        result = num1*num2;
    } else if(op == '/') {
        result = num1/num2;
    } else {
        cout << "Invalid Operator";
    }

    cout << num1 << " " << op << " " << num2 << ": " << result << endl;

    return 0;
}