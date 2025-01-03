#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <double> temps;
    for (double temp;cin>>temp;){
        if (temp == '|'){ // exit for any character
            break;
        }
        else{
            temps.push_back(temp); // pushing into temps
        }
        
    }
    for (double x:temps){
        cout <<x<<" ";
    }
    // sum of temps
    double sum = 0;
    for(double x:temps){
        sum+=x;
    }

    // average of temps
    double avg;
    if (temps.size() == 0){
        avg = 0;
    }
    else {
        avg = sum / temps.size();
    }
    


    // median 
    double median;
    if (temps.size() == 0){
        median = 0;
    }
    else if (temps.size() % 2 != 0){
        median = temps[temps.size()/2];
    }
    else if (temps.size() % 2 == 0){
        median = sum / temps.size();
    }


    cout <<"\nsum of temps is: "<<sum<<endl;
    cout <<"average of temps is: "<<avg<<endl;
    cout <<"median: "<<median;



    return 0;
}