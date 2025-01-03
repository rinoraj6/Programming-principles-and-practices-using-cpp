// write a program to check if an integer number is odd or even

#include <iostream>
using namespace std;

int main (){

    int number;
    cout << "enter an integer number: ";
    cin >> number;

    if (number == 0)
        cout << "number is Zero";
    else if (number % 2 == 0)
        cout <<"given number "<<number << " is Even";
    else
        cout <<"given number "<<number << " is Odd";


    return 0;
}