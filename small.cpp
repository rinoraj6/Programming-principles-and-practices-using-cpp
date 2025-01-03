// write a program to find the smallest number in a loop

#include <iostream>
using namespace std;
int main (){

    int number;
    int smallest = 0;
    int prev = 0, current;

    while (1){
        cout <<"\nenter a number: ";
        cin >>number;
        if (!number){
            cout <<"smallest number so far: "<<smallest;
            break;
        }
        else if(prev == 0){
                current = number;
                prev = current;
                smallest = current;
            }
        else if (prev != 0){
            current = number;
            if (current > smallest);
            else {
                smallest = current;    
            }
            prev = current;
        }
        }
    

    return 0;
}