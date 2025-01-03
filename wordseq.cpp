// write a program that takes 3 string input and outputs in 

#include <iostream>
using namespace std;

int main (){
    string val1 = "heming";
    string val2 = "fitzg";
    string val3 = "stein";

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