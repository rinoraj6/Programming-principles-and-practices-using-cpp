// write a program that prompts the user to enter two integer values
// smaller, larger, sum, difference, product, and ratio

#include <iostream>
using namespace std;

int main (){

    int val1, val2;
    cout <<"Enter two numbers: ";
    cin >> val1 >> val2;
    
    // check the numbers if they are zero or not
    if (val1<=0 || val2<=0)
        cout <<"The numbers can not be zero";
    // else do comparison
    else
        cout <<"values are val1 = "<<val1 <<" val2 = "<<val2;    
        //  comparison
        if (val1 >= val2){
            cout <<"\nSmaller number is =  " <<val2;
            cout <<"\nLarger number is =  " <<val1;
        }
        else{
            cout <<"\nSmaller number is =  " <<val1;
            cout <<"\nLarger number is =  " <<val2;
        }
        cout <<"\nSum of "<< val1 <<" + "<<val2 <<" = "<<val1 + val2;
        cout <<"\nDifference of "<< val1 <<" - "<<val2 <<" = "<<val1 - val2;
        cout <<"\nProduct of "<< val1 <<" x "<<val2 <<" = "<<val1 * val2;
        

    return 0;
}