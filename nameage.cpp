// write a program to prompt the user to write name and age
// 



#include <iostream>
using namespace std;

int main (){

    string name;
    int age;

    cout <<"Hello user enter your name and age: ";
    cin >> name >> age;

    cout << "Hi " << name <<" You are " <<age <<" years old";

    return 0;
}