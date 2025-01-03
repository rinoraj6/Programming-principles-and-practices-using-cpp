// write a program to print alphabet value;

#include <iostream>
using namespace std;

int main (){
    char alphabet = 'a';
    char alphabet_upper = 'A';
    // int limit = 1;

    // using while loop
    // while (limit <=26){
    //     limit +=1;
    //     if (alphabet == 'a'){
    //         cout << alphabet <<" : "<<int (char(alphabet))<<'\n';
    //         alphabet = char(alphabet + 1);
    //     }
    //     else{
    //         cout <<alphabet << " : "<<int(char(alphabet))<<"\n";
    //         alphabet = char(alphabet + 1);    
    //     }
    // }

    // using for loop for uppercase alpahabets
    for (int i = 0;i<26;i++){
            cout <<alphabet_upper << " : "<<int(alphabet_upper)<<"\n";
            alphabet_upper = char(alphabet_upper + 1);    
    }    
    cout<<"--------------------------------------------------------------------\n";
    // 
    for (int i = 0;i<26;i++){
            cout <<alphabet << " : "<<int(alphabet)<<"\n";
            alphabet = char(alphabet + 1);    
    }    
    
    

    return 0;
}