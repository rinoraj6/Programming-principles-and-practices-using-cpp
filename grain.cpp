// calculate how many grains is needed in each sqauare;
// sqaure number 1 : grains : 
// write a program to calculate how many squares are required to give the inventor 
// atleast 1000 grains of rice

#include <iostream>
using namespace std;

int main (){
    int num_squares;
    int grains;
    // atleast 1000 grains 
    while (grains <= 1000){
        
        if (num_squares == 1){
            grains = 1;
        }
            num_squares += 1;
            grains = grains * 2;
    }
    cout <<"thousand grains is received at square number : "<<num_squares <<endl;
    
    // at least 1,000,000
    while (grains <= 1000000){
            num_squares += 1;
            grains = grains * 2;
    }    
    cout <<"1 million grains is received at square number : "<<num_squares<<endl;

    // at least 1,000,000,000 
    while (grains <= 1000000000){
            num_squares += 1;
            grains = grains * 2;
    }    
    cout <<"billion grains is received at square number : "<<num_squares<<endl;

    
        
               
    
    return 0;
}