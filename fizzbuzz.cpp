// write a program that prints the numbers 1 - 100 line by line
// if the number is a multiple of 3 write "fizz" instead of the number
// if the number is a multiple of 5 write "buzz" instead of the number
// if the number is a multiple of both 5 and 3 then write "fizzbuzz" instead of the number


#include <iostream>
using namespace std;

int main (){
    for (int i = 1;i<=100;i++){
        if (i % 5 == 0 && i % 3 == 0){
            cout <<"fizzbuzz"<<endl;
        }
        else if (i % 5 == 0){
            cout <<"buzz"<<endl;
        }
        else if ( i % 3 == 0){
            cout <<"fizz"<<endl;
        }
        else{
            cout <<i<<endl;
        }
    }



    return 0;
}