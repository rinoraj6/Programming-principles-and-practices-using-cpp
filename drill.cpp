// write a program that consists of a while loop
// reads two ints and outputs
// terminate when '|'is given

#include <iostream>
#include <vector>
using namespace std;

int main (){

    double a;
    double prev = 0.0, current =0.0 ;
    vector <double> numbers;
    char end_cond = '|';
    cout <<"enter a floating value: "; 
    while (cin >>a){
        current = a;

        if (a == end_cond){
            cout <<"Exiting ;)";
            break;
        }
        else if (prev == 0.0){
            cout <<"a: "<<a<<" is the only number\n";
            current = a;
            prev = current;
            numbers.push_back(a);
        }
        else if (prev > current){
            cout <<prev <<" is the largest so far\n";
            prev = current;
            numbers.push_back(a);
        }
        else if (prev < current){
            cout <<current<<" is the largest  so far\n";
            prev = current;
            numbers.push_back(a);
            
        }
        
    }  

    return 0;
}