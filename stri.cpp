// simple program on operators on string

#include <iostream>
using namespace std;

int main (){

    cout << "Enter first name and second name: ";
    string fname;
    string sname;
    cin >>fname;
    cin >>sname;
    string name = fname +" "+sname;
    cout <<"name is : " << name;
    cout <<"\n";
    if (fname == sname ){
        cout << "names are same";
    }
    else {
        cout << "names are not same";
    }


    return 0;
}