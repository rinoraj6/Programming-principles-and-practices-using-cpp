// write a program to convert to spelled numbers into digits
// do for 0 1 2 3 4
// else print stupid computer;

#include <iostream>
using namespace std;

int main (){

    string spelled_num;

    cout << "spell a digit: ";
    cin >> spelled_num;

    if (spelled_num == "zero" || spelled_num == "Zero")
        cout << "0";
    else if (spelled_num == "one" || spelled_num == "One")
        cout << "1";
    else if (spelled_num == "two" || spelled_num == "Two")
        cout << "2";
    else if (spelled_num == "three" || spelled_num == "Three")
        cout << "3";
    else if (spelled_num == "four" || spelled_num == "Four")
        cout << "4";
    else 
        cout << "Number not recognised! Stupid computer :( ";
    return 0;
}