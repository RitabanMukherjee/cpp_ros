#include<iostream>

using namespace std;

int main(){

    int luckyNums[20] = {4, 8, 15, 16, 23, 22};

    cout << luckyNums[0] << endl;
    cout << luckyNums[2] << endl;

    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;

    luckyNums[10] = 100;
    cout << luckyNums[10] << endl;

    

    return 0;
}