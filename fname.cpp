// program ask for user to enter first name, last name and age
// output is a greeting :)


#include <iostream>
#include <string>
using namespace std;


int main (){
    cout << "Enter your first name: ";
    string fname;
    cin >> fname;
    cout << "Enter your second name: ";
    string sname;
    cin >> sname;

    cout << "Enter your age: ";
    int age;
    cin >> age;

    cout << "hELLO" << fname << sname << age;


   

    return 0;
}