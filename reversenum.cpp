// write a program to reverse a given number;

#include <iostream>
using namespace std;

int main (){

    int number;
    int remainder;
    cout << "enter a number of length more than 1: ";
    cin >> number;
    while (number !=0){
        remainder = number % 10;
        number = number/10;
        cout << remainder;
    }

    return 0;
}