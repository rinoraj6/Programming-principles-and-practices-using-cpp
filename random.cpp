// write a program to generate random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    srand(time(0));
    
    cout << rand() % 10;


    return 0;
}