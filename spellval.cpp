// write a program that converts digits into its spelled out value;



#include <iostream>
#include <vector>
using namespace std;

int main (){
    // vector<string> spelled_value = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    // int digit;

    // cout <<"enter a digit: ";
    // cin >> digit;
    // int position;
    // if (digit == 0){
    //     position = 0;
    // }
    // else {
    //     position = digit;
    // }

    // cout <<"\nentered digit is: "<<digit<<" "<<"spelled out value is: "<<spelled_value[position];


    // write a calculator program that takes a single digit either 
    // as a number or spelled, and  find it sum ( do any type of calculation)

    vector<string> spelled_value_letters = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> spelled_value_digits = {"0","1","2","3","4","5","6","7","8","9"};
    vector<int> digits = {0,1,2,3,4,5,6,7,8,9};

    string digit_1,digit_2;
    cout <<"enter a digit either as a number or spelled out (eg: 7 or seven): ";
    cin >>digit_1;
    cout <<"\nenter a digit either as a number or spelled out (eg: 7 or seven): ";
    cin >>digit_2;
    int dig_1,dig_2,position;

    for (int i = 0;i<spelled_value_letters.size();i++){
        if (spelled_value_letters[i]==digit_1){
            position = i;
            dig_1 = digits[position];
        }
    }
    for (int i = 0;i<spelled_value_digits.size();i++){
        if (spelled_value_digits[i]==digit_1){
            position = i;
            dig_1 = digits[position];
        }
    }

    for (int i = 0;i<spelled_value_letters.size();i++){
        if (spelled_value_letters[i]==digit_2){
            position = i;
            dig_2 = digits[position];
        }
    }
    for (int i = 0;i<spelled_value_digits.size();i++){
        if (spelled_value_digits[i]==digit_2){
            position = i;
            dig_2 = digits[position];
        }
    }


    cout <<"\nsum: "<<dig_1 + dig_2;

    






    return 0;
}