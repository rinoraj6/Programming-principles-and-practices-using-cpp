// write a program to find prime number between 1 - 100 using sieve erasthanus method



#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> primes;
    for (int i = 2;i<=100;i++){
        primes.push_back(i);
    }
    
    for (int x:primes){
        cout <<x<<" ";
    }
    cout << endl;

    // algo works from here
    for (int i = 2;i<=primes.size();i++){
        for (int j = i;j<=primes.size();j++){
            if (primes[j] % i == 0){
                primes[j] = 0;
            }
        }
        // EVERY ITERATION OF THE ALGO
        cout <<"\n------------------------"<<endl;
        for (int x:primes){
        cout <<x<<" ";
        }    
    }
    cout <<endl;
    // for (int x:primes){
    //     cout <<x<<" ";
    // }

    


    return 0;
}
