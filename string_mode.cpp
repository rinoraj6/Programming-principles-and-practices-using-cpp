// write a program to find the min max and mode of a string;


#include <iostream>
#include <vector>
using namespace std;

int main (){

    vector<string> str_vector;
    cout <<"enter  string: ";
    for (string str;cin >> str;){
        if (str == "|"){
            break;
        }
        else{
            str_vector.push_back(str);
        }
    }

    for (string x:str_vector){
        cout <<x<<" ";
    }

// min of string 
    int min_string = 0;
    string str_min;
    for (string x:str_vector){
        if (min_string == 0){
            min_string = x.length();
            str_min = x;
        }
        else if (min_string > x.length()){
            min_string = x.length();
            str_min = x;
        }

    }
    cout <<endl;
    cout <<"min string is : "<<min_string<<endl;
    cout <<"min string is : "<<str_min<<endl;
    

// max string 
    int max_string = 0;
    string str_max;
    for (string x:str_vector){
        if (max_string == 0){
            max_string = x.length();
            str_max = x;
        }
        else if (max_string < x.length()){
            max_string = x.length();
            str_max = x;
        }

    }
    cout <<endl;
    cout <<"string max is : "<<max_string<<endl;
    cout <<"max string is : "<<str_max<<endl;

// mode of a string
    


    return 0;
}