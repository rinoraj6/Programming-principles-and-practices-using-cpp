// solve quadratic equation
// a(x*x) + bx + c = 0
// x = -b (+-)root of ((b * b) - 4ac) / 2a
// x can be two values

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    double a,b,c;
    double x_pos,x_neg;

    cout <<"Quadratic equation"<<endl;
    cout <<"enter value of a: ";
    cin >>a;
    cout <<"enter value of b: ";
    cin >>b;
    cout <<"enter value of c: ";
    cin >>c;

// calculate x
// calculate b2 - 4ac;
    double inside_root;
    inside_root = ((b * b) - (4 * a * c));
// calculate 2a;
    double divisor;
    divisor = 2 * a;

// calculate x positive
    x_pos = ((-b) + sqrt(inside_root)) / divisor;

// calculate x negative
    x_neg = ((-b) - sqrt(inside_root)) / divisor;

    cout <<"x postive : "<<x_pos<<endl;
    cout <<"x negative : "<<x_neg<<endl;


    return 0;
}