// simple program to exercise operators

#include <iostream>
#include <math.h> // math functions include sqrt
using namespace std;

int main (){

    cout << "Please enter number: ";
    // double fp = 0;
    int fp = 0;
    cin >>fp;
    cout << "value fp == "<< fp;
    cout <<"\nfp+1 = "<<fp+1;
    cout <<"\nfp 3 times = " <<fp * 3;
    cout <<"\nfp squared = " <<fp * fp;
    cout <<"\nfp square root = " <<sqrt(fp);
    cout <<"\nfp divison by 2 = " <<fp/2;
    cout <<"\nfp % modulo operator by 2 = " << fp % 2;

    return 0;
}