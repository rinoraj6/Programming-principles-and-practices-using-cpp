// write a guessing games 


#include <iostream>
#include <vector>
using namespace std;

int main (){
    int pick = 7;
    vector<int> numbers;
    char odd_even, divisble_3;


    // cout <<"Pick a number between 1 - 10"<<endl;
    // cin >> pick;

    // numbers to vector 
    for (int i = 1;i<=10;i++){
        numbers.push_back(i);
    }
    // your number is here;
    cout << "your number is here. can you see it?"<<endl;
    
    for (int x:numbers){
        cout <<x<<" ";
    }
    cout << "\nlet me find the number by asking you a few questions."<<endl;

    cout <<"first question"<<endl;
    cout <<"is the number is odd ( y/n )?"<<endl;
    cin >> odd_even;

    // odd even check
    if (odd_even == 'y'){
        for (int i = 0;i<numbers.size();i++){
            if (numbers[i]%2 == 0){
                numbers.erase(numbers.begin()+i);
            }
        }
        cout << "your number is here, can you see it"<<endl;
        for (int x:numbers){
            cout <<x<<" ";
        }

        // next question 
        cout <<"let me ask another question"<<endl;
        cout <<"is the number divisble by 3 ( y/n )"<<endl;
        cin >> divisble_3;
        if (divisble_3 == 'y'){
            for (int i=0;i<=numbers.size();i++){
                if (numbers[i] % 7 !=0){
                    numbers.erase(numbers.begin()+i);
                }
            }
            cout << "your number is here, can you see it"<<endl;
            for (int x:numbers){
                cout <<x<<" ";
            }
        }


    }
    else if (odd_even == 'n'){
        for (int i = 0;i<numbers.size();i++){
            if (numbers[i]%2 != 0){
                numbers.erase(numbers.begin()+i);
            }
        }
        cout << "your number is here, can you see it"<<endl;
        for (int x:numbers){
            cout <<x<<" ";
        }
    }

    


    return 0;
}