// write a program that takes 3 int input and outputs in numerical sequence
// 454 - 4,4,5 657 - 5,6,7
// output numbers are seperated by comma
// a b c abc bac cba bca





// ------------------------------------
#include <iostream>
using namespace std;

int main (){

    int val1,val2,val3;
    int place1 = 0;
    int place2 = 0;
    int place3 = 0;
    cout << "please enter 3 integer values : ";
    cin >> val1>>val2>>val3;

    // comparison 
    if ((val1<=val2 && val1<=val3) && (val2<=val3)){ //abc
        cout <<val1<<"," <<val2 <<"," <<val3;    
        cout <<"\n";
    }
    else if ((val1<=val2 && val1<=val3) && (val3<=val2)){ //acb
        cout <<val1 <<"," <<val3 <<"," <<val2;    
        cout <<"\n";
    }

    else if ((val2 <=val1 && val2 <=val3) && (val1 <=val3)){ //bac 
        cout <<val2 <<"," <<val1 <<"," <<val3;    
        cout <<"\n";
    }
    else if((val2 <=val1 && val2 <=val3) && (val3 <= val1)){  //bca
        cout <<val2 <<"," <<val3 <<"," <<val1;    
        cout <<"\n";
    }

    else if((val3 <=val1 && val3 <=val2) && (val2 <= val1)){  //cba 
        cout <<val3 <<"," <<val2 <<","<<val1;    
        cout <<"\n";
    }
    else if((val3 <=val1 && val3 <=val2) && (val1 <= val2)){  //cab
        cout <<val3 <<"," <<val1 <<"," <<val2;    
        cout <<"\n";
    }
    

    return 0;
}