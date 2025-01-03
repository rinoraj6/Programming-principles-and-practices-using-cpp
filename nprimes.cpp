// write a program that takes a 'n' value and 
// output 'n' number of primes

#include <iostream>
#include <vector>
using namespace std;

void find_prime(int x){
    vector<int> primes;
    int number_of_primes = 0; 
    for (int i = 2;i<=1000;i++){
        int is_prime = 0;
        for (int j = 2; j<=i;j++){
            if ( i % j == 0){
                is_prime += 1;
            }
        }
        if (is_prime <2){
            primes.push_back(i);
            number_of_primes += 1;
        }
        if (number_of_primes == x)
            break;
        is_prime = 0;
    }
    cout << "\nfirst "<<x<<" primes: \n";
    for (int z:primes){
        cout <<z<<" ";
    }
}


int main (){
    int n;
    cout << "how many primes : ";
    cin >> n;
    find_prime(n);
    return 0;
}