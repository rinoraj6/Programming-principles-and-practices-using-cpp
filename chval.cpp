// write a program that reads a string from input and then for each character read,
// prints out the character and its integer value on a line

#include <iostream>
#include <vector>
using namespace std;

int main (){
    char s;
    int val = 0;
    vector <char> line;
    cout << "enter a string: ";
    while(cin>>s){
        if (s == ' '){
            break;
        }
        else{
            line.push_back(s);
        }
    }
    for (char x:line){
        cout <<"\n"<<x<<" : "<<int(x);
        val +=int(x);
    }
    cout <<"\nvalue is: "<<val;
    

    return 0;
}