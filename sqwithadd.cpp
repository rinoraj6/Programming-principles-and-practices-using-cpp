// implement a function that calculates the square of a number without multiplication
// addition

#include <iostream>
using namespace std;

// function calculating square 
int square(int x){
        int sq_val;
        for (int i = 1; i<=x;i++){
            sq_val +=x;
        }
        return sq_val;
    }

// main function
int main (){
    int number;
    cout << "Enter a number : ";
    cin >> number;
    cout <<square(number);
    return 0;
}