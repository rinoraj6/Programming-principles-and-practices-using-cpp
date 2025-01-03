// write a program that produces simple form letter

#include <iostream>
using namespace std;

int main (){

    string first_name;
    string friend_name;
    int age;
    cout << "Enter the first name of person you want to write to: ";
    cin >>first_name;
    cout << "Dear "<<first_name<<",";
    cout << "How are you?, I'm fine. I miss you.\n";
    cout << "enter a friends name:";
    cin >>friend_name;
    cout <<"Have you seen "<<friend_name <<" lately?";
    cout <<"\nenter recipients age: " ;
    cin >>age;
    cout <<"I hear you just had a birthday and you are "<<age<<" years old.";

    if (age <= 12)
        cout <<"\nNext year you will be "<<age+1;
    else if (age == 17)
        cout <<"\nNext year you will be able to vote.";
    else if (age >=70)
        cout <<"\nAre you retired?";
    
    cout <<"\nYours sincerely";
    cout <<"\n----------------";
    cout <<"\n----------------";




    return 0;
}