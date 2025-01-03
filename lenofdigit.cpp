// write a program to find the length of any number;

#include <iostream>
using namespace std;

int main (){

    int number;
    int len = 0;

    cout << "enter a number: ";
    cin >> number;

    while(number!=0){
        number = number/10;
        len+=1;
    }

    // if (len > 2)
    //     cout << "number is too long";
    // else
    cout <<"length is: "<<len;
    
    
    


    return 0;
}