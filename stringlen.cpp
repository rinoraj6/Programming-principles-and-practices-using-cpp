// write a program to find the length of a string

#include <iostream>
using namespace std;


int main (){

    string s;
    cout <<"enter a string: ";
    cin >>s;
    int len = 0;
    for (char i:s){
            len++;
    }
    cout <<"\nlength of the string "<<s<<" is: "<<len;

    return 0;
}