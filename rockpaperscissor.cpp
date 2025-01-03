// write a program to emulate rock paper scissor
// rock beats scissor
// scissor beats paper
// paper beats rock

#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> vars = {1,2,3};
    int choice;
    cout <<"rock - paper - scissor\n";
    
    while (1){
        int seed;
        cout <<"Enter a number (trigger opponent): "<<endl;
        cin >>seed;
        int num;
        num = (seed * 73 + 41) % 3 + 1;
        cout <<"computer chose. now its your turn:"<<endl;
        cout <<"enter your choice\n";
        cout <<"enter 1  for rock\n";
        cout <<"enter 2  for paper\n";
        cout <<"enter 3  for scissor\n";
        cout <<">";
        cin>>choice;
        char yes_no;
        // rock
        if (choice == 1){ 
            if (num == choice){
                cout <<"computer chose "<<"rock\n";
                cout <<"player chose "<<"rock\n";
                cout <<"draw\n";
                cout <<"do you want to play another round: ( y/n )\n";
                if (yes_no == 'y');
                else if (yes_no == 'n'){
                    break;
                }
            }
            else{ // paper
                if (num == 2){
                    cout <<"opponent chose "<<"paper\n";
                    cout <<"player chose "<<"rock\n";
                    cout <<"paper beats rock. opponent wins. you lose\n";
                    cout <<"do you want to play another round: ( y/n )\n";
                    if (yes_no == 'y');
                    else if (yes_no == 'n'){
                        break;
                    }
                }
                else if (num == 3){
                    cout <<"computer chose "<<"scissor\n";
                    cout <<"player chose "<<"rock\n";
                    cout <<"rock beats scissor. player wins\n";
                    cout <<"do you want to play another round: ( y/n )\n";
                    if (yes_no == 'y');
                    else if (yes_no == 'n'){
                        break;
                    }
                }
            
            }
        }

        // paper
        if (choice == 2){ 
            if (num == choice){
                cout <<"computer chose "<<"paper\n";
                cout <<"player chose "<<"paper\n";
                cout <<"draw\n";
                cout <<"do you want to play another round: ( y/n )\n";
                if (yes_no == 'y');
                else if (yes_no == 'n'){
                    break;
                }
            }
            else{ // paper
                if (num == 1){
                    cout <<"opponent chose "<<"rock\n";
                    cout <<"player chose "<<"paper\n";
                    cout <<"paper beats rock. player wins. you lose\n";
                    cout <<"do you want to play another round: ( y/n )\n";
                    if (yes_no == 'y');
                    else if (yes_no == 'n'){
                        break;
                    }
                }
                else if (num == 3){
                    cout <<"computer chose "<<"scissor\n";
                    cout <<"player chose "<<"paper\n";
                    cout <<"scissor beats paper. opponent wins\n";
                    cout <<"do you want to play another round: ( y/n )\n";
                    if (yes_no == 'y');
                    else if (yes_no == 'n'){
                        break;
                    }
                }
            
            }
        } 

        // scissor 
        if (choice == 3){ 
            if (num == choice){
                cout <<"computer chose "<<"scissor\n";
                cout <<"player chose "<<"scissor\n";
                cout <<"draw\n";
                cout <<"do you want to play another round: ( y/n )\n";
                if (yes_no == 'y');
                else if (yes_no == 'n'){
                    break;
                }
            }
            else{ 
                if (num == 1){
                    cout <<"opponent chose "<<"rock\n";
                    cout <<"player chose "<<"scissor\n";
                    cout <<"rock beats scissor. opponent wins. you lose\n";
                    cout <<"do you want to play another round: ( y/n )\n";
                    if (yes_no == 'y');
                    else if (yes_no == 'n'){
                        break;
                    }
                }
                else if (num == 2){
                    cout <<"computer chose "<<"paper\n";
                    cout <<"player chose "<<"scissor\n";
                    cout <<"scissor beats paper. player wins\n";
                    cout <<"do you want to play another round: ( y/n )\n";
                    if (yes_no == 'y');
                    else if (yes_no == 'n'){
                        break;
                    }
                }
            
            }
        }
    
    }
    



    return 0;
}