// write a program to find the prime numbers between 1 to 100
// use a vector

#include <iostream>
#include <vector>
using namespace std;

vector<int> prime_found;
void check_prime(int a){
    int is_prime = 0;
    for (int i = 2;i<=a;i++){
        if (a % i == 0){
            is_prime+=1;
        }
    }
    if (is_prime <2){
        prime_found.push_back(a);
    }

}

int main (){
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    
    for (int i = 2;i<=100;i++){
        check_prime(i);
    }
    
    for (int x:prime_found){
        cout <<x<<endl;
    }

    return 0;
}


