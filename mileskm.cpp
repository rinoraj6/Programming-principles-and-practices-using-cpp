// write a program to convert from miles to km
// mile = 1.609 km

#include <iostream>
using namespace std;

int main (){

    double miles;
    double km;

    cout <<"Miles to Kilo meter conversion\n";
    cout <<"Enter miles to convert: ";
    cin >>miles;
    cout <<"kilometer: " << miles * 1.609 << "KM";


    return 0;
}
