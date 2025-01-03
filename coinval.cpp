// write a program to prompts the user to enter 
// pennies nickels dimes quarters half dollars and one dollar coins
// output all the coin values

#include <iostream>
using namespace std;

int main (){
    
    int pennies, nickels, dimes, quarters, half_dollars, dollar_coin;
    double cent_coin = 0.0;

    cout << "\nenter number of pennies do you have: ";
    cin >> pennies;
    cout << "\nenter number of nickels do you have: ";
    cin >> nickels;
    cout << "\nenter number of dimes do you have: ";
    cin >> dimes;
    cout << "\nenter number of quarters do you have: ";
    cin >> quarters;
    cout << "\nenter number of half dollars do you have: ";
    cin >> half_dollars;
    cout << "\nenter number of dollars do you have: ";
    cin >> dollar_coin;

    if (dollar_coin != 0){ // 1 dollar  = 100 cents
        if (dollar_coin == 1){
            cout << "\nyou have "<<dollar_coin << " dollar coin";
        }
        else{
            cout << "\nyou have "<<dollar_coin << " dollar coins";
        }
        cent_coin = dollar_coin * 100;
    }

    if (half_dollars != 0){ // 1 half dollar = 50 cents
        if (half_dollars == 1){
            cout << "\nyou have "<<half_dollars << " half dollar";
        }
        else{
            cout << "\nyou have "<<half_dollars << " half dollars";
        }
        half_dollars = half_dollars * 50;
        cent_coin += half_dollars;
    }

    if (quarters != 0){ // 1 quarter = 25 cents
        if (quarters == 1){
            cout << "\nyou have "<<quarters << " quarter";
        }
        else{
            cout << "\nyou have "<<quarters << " quarters";
        }
        quarters = quarters * 25;
        cent_coin += quarters;
    }

    if (dimes != 0){ // 1 dime = 10 cent
        if (dimes == 1){
            cout << "\nyou have "<<dimes << " dime";
        }
        else {
            cout << "\nyou have "<<dimes << " dimes";
        }
        dimes = dimes * 10;
        cent_coin += dimes;
    }

    if (nickels !=0){ // 1 nickel = 5 cent
        if (nickels == 1){
            cout << "\nyou have "<<nickels << " nickel";
        }
        else{
            cout << "\nyou have "<<nickels << " nickels";
        }
        nickels = nickels * 5;
        cent_coin += nickels;
    }

    if (pennies != 0) { // 1 pennies = 1 cent
        if (pennies == 1){
            cout << "\nyou have "<<pennies << " penny";
        }
        else{
            cout << "\nyou have "<<pennies << " pennies";
        }
        cent_coin += pennies;
    }
    
    else { // if all is zero
        cent_coin = 0;
    }

    if (cent_coin == 1){
        cout << "\nvalue of all of your coins is "<<cent_coin << " cent";
    }
    else{
        cent_coin = cent_coin/100;
        cout << "\nvalue of all of your coins is "<<cent_coin <<" dollars.";
    }
    return 0;
}