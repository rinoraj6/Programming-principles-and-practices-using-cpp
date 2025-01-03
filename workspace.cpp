// workspace to try out code

// #include <iostream>
// using namespace std;

// int main (){
    // string name = "rino";
    // int age = 23;
    // cout << name << age;

    // cout << "enter your name and age: "; // prompting user
    
    // int age; // age number
    // string name; //name string

    // cin >> name >> age; // reading value to variable

    // cout << "name: " <<name <<" age: " <<age; // output string

    
    // int age;
    // cout << "enter your  age: "; // prompting user
    // cin >> age;
    // age  =

   

// #include <iostream>
// using namespace std;

// int main (){
//     string val1 = "heming";
//     string val2 = "fitzg";
//     string val3 = "stein";

//     if ((val1<=val2 && val1<=val3) && (val2<=val3)){ //abc
//         cout <<val1<<"," <<val2 <<"," <<val3;    
//         cout <<"\n";
//     }
//     else if ((val1<=val2 && val1<=val3) && (val3<=val2)){ //acb
//         cout <<val1 <<"," <<val3 <<"," <<val2;    
//         cout <<"\n";
//     }

//     else if ((val2 <=val1 && val2 <=val3) && (val1 <=val3)){ //bac 
//         cout <<val2 <<"," <<val1 <<"," <<val3;    
//         cout <<"\n";
//     }
//     else if((val2 <=val1 && val2 <=val3) && (val3 <= val1)){  //bca
//         cout <<val2 <<"," <<val3 <<"," <<val1;    
//         cout <<"\n";
//     }

//     else if((val3 <=val1 && val3 <=val2) && (val2 <= val1)){  //cba 
//         cout <<val3 <<"," <<val2 <<","<<val1;    
//         cout <<"\n";
//     }
//     else if((val3 <=val1 && val3 <=val2) && (val1 <= val2)){  //cab
//         cout <<val3 <<"," <<val1 <<"," <<val2;    
//         cout <<"\n";
//     }
    



//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main (){
//     int a;
//     // char c;
//     string s;
//     cout << "enter an integer followed by a string: ";
//     cin >>a>>s;
//     cout <<"the integer is : "<<a<<"\n";
//     // cout <<"the character is : "<<c<<"\n";
//     cout <<"the string is : "<<s<<"\n";


//     return 0;
// }


// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;


// void check (int a, int b, int c, int guess){
//     int x, y, z;
//     int temp;
//     while (guess !=0){
//         temp = guess % 10;
        
//     }
// }


// int main (){
//     int a,b,c;
//     int guess;
//     int limit = 5;

//     srand(time(0));
    
//     a = rand() % 10;
//     if (a == 0){
//         a = rand() % 10;
//     }
//     cout << a;
//     b = rand() % 10;
//     cout << b;
//     c = rand() % 10;
//     cout << c;

//     while (1){
//         limit -=1;
//         if (limit == 0)
//             break;
//         cout << "enter your guess: ";
//         cin >> guess;
//         check (a,b,c,guess);
    
//     }

//     return 0;
// }



// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// int main (){
//     char arr[10] = {'0','1','2','3','4','5','6','7','8','9'};
//     int limit = 0;
//     string random_string;
//     while (limit != 3){
//         limit+=1;
       
        
//     }
//     // cout << random_string;
    
    
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main (){
//     // vector <int> v = {1,2,3};
//     // vector <string> s = {"fuck","my","life"};
//     // // cout <<v[1];
//     // for (int i = 0; i<s.size();i++){
//     //     cout <<s[i]<<" ";
//     // }
//     vector<int> v = {1,2,3};
//     for (int x:v)
//         cout <<"\n"<<x;
//     cout <<"\nsize of vector v is:"<<v.size();
//     // add a number into the end of the vector
//     v.push_back(3);
//     for (int i:v)
//         cout <<"\n"<<i;
//     cout <<"\nsize of vector v is: "<<v.size();

    
    
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main (){

    // double num;
    // string unit;
    // cout <<"enter a value and unit (ft,in,m,cm): ";
    // cin >>num>>unit;
    // if (unit == "ft" || unit == "in" || unit == "m" || unit == "cm" ){
    //     cout <<"you entered "<<num<<unit;
    // }
    // else{
    //     cout <<"bad unit :)";
    // }


    // return 0;
// }







// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
    // vector <int> number_guess_odd_less_50;
    // vector <int> number_guess_even_less_50;
    // vector <int> number_guess_odd_great_50;
    // vector <int> number_guess_even_great_50;

    // // number odd less than 50
    // for(int i = 1;i<=50;i+=2){
    //         number_guess_odd_less_50.push_back(i);
    // }
    // for (int x:number_guess_odd_less_50){
    //     cout <<x<<" ";
    // }
    // cout <<"\n";

    // // number odd greater than 50
    // for(int i = 51;i<=100;i+=2){
    //         number_guess_odd_great_50.push_back(i);
    // }
    // for (int x:number_guess_odd_great_50){
    //     cout <<x<<" ";
    // }
    // cout <<"\n";

    // // number is even, less than 50
    // for (int i=2;i<=50;i+=2){
    //     number_guess_even_less_50.push_back(i);
    // }
    // for (int x:number_guess_even_less_50){
    //     cout <<x<<" ";
    // }
    // cout <<"\n";
    
    // // number is even, greater than 50
    // for (int i=52;i<=100;i+=2){
    //     number_guess_even_great_50.push_back(i);
    // }
    // for (int x:number_guess_even_great_50){
    //     cout <<x<<" ";
    // }
    // cout <<"\n";






    // vector <int> number_guess_odd_less_50;
    // vector <int> number_guess_even_less_50;
    // vector <int> number_guess_odd_great_50;
    // vector <int> number_guess_even_great_50;

    // int number = 21;
    // int start = 1;
    // int end = 49;

    // // number odd less than 50
    // if (number <50){

    //     cout <<"number resides here;\n";
    //     for(int i = 1;i<=50;i+=2){
    //         number_guess_odd_less_50.push_back(i);
    //     }
    //     // for (int x:number_guess_odd_less_50){
    //     //     cout <<x<<" ";
    //     // }
    // }

    // if (number%3 == 0){
    //     for (int i = 0;i<=number_guess_odd_less_50.size();i++){        
    //             if (number_guess_odd_less_50[i] % 3 == 0 && number_guess_odd_less_50[i] % 7 == 0 ){
    //                 cout <<number_guess_odd_less_50[i]<<" ";
    //             }
                
    //         }
    //     }
    // cout <<"\n";



    

    // return 0;
// 
    // }



#include <iostream>
using namespace std;

int main (){
    int seed;
    int num;
    cout <<"Enter a number: "<<endl;
    cin >>seed;
    num = (seed * 73 + 41) % 3 + 1;
    cout <<"random number is: "<<num;



    return 0;
}


















    
    













