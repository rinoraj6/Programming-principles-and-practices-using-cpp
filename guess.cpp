// write a number guessing game
// user thinks of a number between 1 & 100
// machine guesses using not more than seven questions;

#include <iostream>
#include <vector>
using namespace std;

int main (){
    int number = 21;
    char odd,num_between,divis_3, divis_5, divis_7, divis_9;
    
    cout << "is your number odd? ( y/n ): \n"; // question 1;
    cin >> odd;

// odd
    if (odd == 'y'){ // number is odd
        cout << " your number is odd\n";
        cout << "your number will be one in here\n";
        for (int i = 1;i<=100;i++){
            if (i % 2 != 0){
                cout <<i<<" ";
            }        
        }
        cout <<"\n";
    // /check if the number between 1 - 50 or 51 - 100 and odd
        cout << "is your number between 1 -50: \n"; // question 2
        cin >> num_between;
        if (num_between == 'y'){ // num 1 - 50
            cout << "your number will be one in here\n";
            for (int i = 1;i<=50;i++){
                if (i % 2 != 0){
                    cout << i<< " ";
                }
            }
            cout <<"\n";
            cout << "is your number is divisble by 3 ( y/n )?\n"; //question 3
            cin >> divis_3;
            if (divis_3 == 'y'){
                cout << "your number will be one in here\n";
                for (int i = 1;i<=50;i++){
                    if (i % 3 == 0 &&  i % 2 !=0){
                        cout <<i<<" ";
                    }
                }
                cout << "is your number is divisble by 5 ( y/n )\n?"; //question 4;
                cin >> divis_5;
                if (divis_5 == 'y'){
                cout << "your number will be in here\n";
                    for (int i = 1;i<=50;i++){
                        if (i % 3 == 0 &&  i % 2 !=0 && i % 5 == 0){
                            cout <<i<<" ";
                        }
                    }   
                    cout << "is your number divisble by 9 ( y/n)?\n";
                    cin >>divis_9;
                    if (divis_9 == 'y'){
                        cout << "your number will be one in here\n";
                        for (int i = 1;i<=50;i++){
                            if (i % 3 == 0 &&  i % 2 !=0 && i % 5 == 0 && i % 9 == 0){
                                cout <<i<<" ";
                            }
                        }   
                    }
                    else if (divis_9 == 'n')
                }
            }
            else if (divis_3 == 'n'){
                cout << "\n";
                cout <<"is your number divisble by 5 ( y/n )? \n"; // question 4
                    cin >> divis_5;
                    if ( divis_5 == 'y'){
                        cout << "your number will be here \n";
                        for (int i = 1; i<=50;i++){
                            if (i % 5 == 0 &&  i % 2 !=0){
                               cout <<i<<" ";
                            }       
                        }
                    }
                    
            }
            
            

        }
        else { // num 51 - 100
            for (int i = 1;i<=50;i++){
                cout << "your number will be one in here\n";
                if (i % 2 == 0){
                    cout << i<< " ";
                }
            }
            cout <<"\n";
            cout << "is your number is divisble by 3 ( y/n )?\n"; //question 3
            cin >> divis_3;
        }

    }
    


// // number is even
//     else if (odd == 'n'){
//         cout << " your number is even\n";
//         cout << "your number will be one in here\n";
//         for (int i = 1;i<=100;i++){
//             if (i % 2 == 0){
//                 cout <<i<<" ";
//             }
//             cout <<"\n";
//         }
//     }


    return 0;
}













// int main (){
    
//     int number = 25;
//     char odd_even;
//     char num_between;
    
//     cout <<"is the number odd ( y/n )?: ";
//     cin >>odd_even;

//     if (odd_even == 'y'){
//         cout <<"number is here:)\n";
//         for (int i = 1;i<=100;i+=2){
//             cout << i<<" ";
//         }
//     }
//     else{
//         cout <<"number is here:)\n";
//         for (int i = 2;i<=100;i+=2){
//             cout << i<<" ";
//         }
//     }


//     cout << "\nis this number between 1 -50 ( y/n )?";
//     cin >> num_between;

//     if (num_between == 'y'){
//         cout <<"number is here:)\n";
//         for (int i = 1; i<=50;i+=2){
//             cout <<i<<" ";
//         }
//     }
//     else {
//         cout <<"number is here:)\n";
//         for (int i = 52; i<=100;i+=2){
//             cout <<i<<" ";
//         }
//     }

//     char divis_3;
//     cout <<"\n is the number is divisble by 3 ( y/n)?";
//     cin >> divis_3;

    

    





    

    


//     return 0;
// }