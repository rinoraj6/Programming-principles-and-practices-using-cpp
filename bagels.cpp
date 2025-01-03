// Bagels : a deductive logic game
// guess secret 3 digit number from 10 guesses
// keywords : Pico - one digit is correct. but wrong position
// Fermi - one digit is correct. correct position
// Bagels - no digits are correct

#include <iostream>
#include <cstdlib> // library for the rand() function
#include <ctime> // library for time, for generating different random numbers everytime the program runs
using namespace std;


int check(int y){
    cout << y;
    return 0;
}

int length_check(int x){
        int y = x;
        int length = 0;
        while (x != 0){
            x = x/10;
            length +=1;
        }
        if (length > 2)
            cout <<"not a 2 digit number.";
        check(y);
        return 0;
    }

int main (){

    int a, b;
    int guess;
    int limit = 5;
    srand(time(0));

    a = rand() % 10;
    b = rand() % 10;
    // c = rand() % 10;

    while(1){
        limit-=1;
        cout <<"\nguess a two digit number : ";
        cin >>guess;
        length_check(guess);
        if (limit == 0)
            break;
    }

    


    return 0;
}