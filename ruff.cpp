#include <iostream>
using namespace std;


int main (){
    int num = 2;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    char odd_even;
    for (int i:a){
        cout <<i<<" ";
    }
    cout <<"your number is here: \n";
    cout <<"let me ask a few questions and i will find your number:)\n";
    
    cout <<"is your number is odd ( y/n )\n";
    cin >> odd_even;
    if (odd_even == 'y'){
        for (int i:a){
            if (i % 2 == 0){
                a.pop(i);
            }
        }    
    }




    return 0;   
    }

    
