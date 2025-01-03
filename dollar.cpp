// write a program that converts 
// yen ('y') kroner ('k') pounds ('p')
// to dollar

// yen to dollar conversion 
// 1 USD = 151.791 JPY   ¥₭£

#include <iostream>
#include <iomanip> // string manipulation
using namespace std;

int main (){
    constexpr double yen_in_dollar = 151.791;
    constexpr double kroner_in_dollar = 11.1263;
    constexpr double pound_in_dollar = 0.783342;

    double currency;
    char currency_unit = ' ';
    double dollar_value;

    cout << "Enter currency value: ";
    cin >> currency;
    cout << "Enter currency unit (y for yen / k for kroner / p for pound ): ";
    cin >> currency_unit;

    // if (currency_unit == 'y'){
    //     dollar_value = currency / yen_in_dollar;
    //     cout << "conversion from Yen ¥ "<<currency <<" to dollar is: "<<setprecision(2)<<dollar_value;
    // }
    // else if (currency_unit == 'k'){
    //     dollar_value = currency / kroner_in_dollar;
    //     cout << "conversion from Kroner ₭ "<<currency <<" to dollar is: "<<setprecision(3)<<dollar_value;
    // }
    // else if (currency_unit == 'p'){
    //     dollar_value = currency / pound_in_dollar;
    //     cout << "conversion from Pound £ "<<currency <<" to dollar is: "<<setprecision(3)<<dollar_value;
    // }
    // else {
    //     cout << "Unit not recognised :(";
    // }

    // using switch

    switch (currency_unit){
        case 'y':
                dollar_value = currency / yen_in_dollar;
                cout << "conversion from Yen ¥ "<<currency <<" to dollar is: "<<setprecision(2)<<dollar_value;
                break;
        case 'k':
                dollar_value = currency / kroner_in_dollar;
                cout << "conversion from Kroner ₭ "<<currency <<" to dollar is: "<<setprecision(3)<<dollar_value;
                break;
        case 'p':
                dollar_value = currency / pound_in_dollar;
                cout << "conversion from Pound £ "<<currency <<" to dollar is: "<<setprecision(3)<<dollar_value;
                break;
        default:
                cout << "Unit not recognised :(";

    }

    return 0;
}