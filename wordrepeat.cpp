// write a program to check if words are repeating in a message

#include <iostream>
using namespace std;

int main (){

    string previous;
    string current;
    int wordNumber = 0;
    cout << "enter a message: ";
    
    while (cin >> current){
        wordNumber+=1;
        if (previous == current){
            cout <<"repeated word at : "<<wordNumber <<"\n";
        }
        else 
            previous = current;
    }
    
    
    return 0;
}