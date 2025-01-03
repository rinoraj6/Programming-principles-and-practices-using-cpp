// write a program to calculate and print a table of squares from 1 -99

#include <iostream>
using namespace std;

int main (){
    cout << "Table of squares from 1 to 99";
    int n = 1;
    while (n < 100){
        cout << n <<"\t"<<n * n <<"\n";
        n++; 
    }
    
    return 0;
}