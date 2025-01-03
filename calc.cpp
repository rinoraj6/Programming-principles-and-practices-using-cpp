// write a program that takes an operation followed by two operands
// + 30 40 


#include <iostream>
using namespace std;

int main (){

    char operation;
    double val1, val2;
    double result;

    cout << "enter an operation followed by an operation (+ 30 40) : ";
    cin >>operation>>val1>>val2;

    if (operation == '+'){
        result = val1 + val2;
        cout <<"Addition " <<val1 << " + " <<val2<<" = ";
        cout <<result;
    }
        
    else if (operation == '-'){
        result = val1 - val2;
        cout <<"Subtraction " <<val1 << " - " <<val2<<" = ";
        cout <<result;
    }
        
    else if (operation == '*'){
        result = val1 * val2;
        cout <<"Multiplication " <<val1 << " x " <<val2<<" = ";
        cout <<result;
    }
        
    else if (operation == '/'){
        result = val1 / val2;
        cout <<"Division " <<val1 << " / " <<val2<<" = ";
        cout <<result;
    }
        
    else{
        cout <<"not a recognised input";
    }
        

    return 0;
}