// write a program to read a values in vector, values are distances between two cities
// on diiferent routes

#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<double> distances;
    for (double distance;cin>>distance;){
        if (distance == '|'){ // exit condition
            break;
        }
        else {
            distances.push_back(distance);
        }
    }

    if (distances.size() == 0){
        cout <<"no data. exiting now.....";
        exit(0);
    }
    for (double x:distances){
        cout <<x<<" ";
    }

    // sum of all distances 
    double sum = 0;
    for (double x:distances){
        sum+=x;
    }
    // greatest and smallest distances
    double greatest, smallest;
    double temp = 0.0;
    for (double x:distances){ // find greatest
        if (temp == 0){
            temp = x;
            greatest = x;
        }
        else {
            temp = x;
            if (temp > greatest){
                greatest = temp;
            }
        }
    }
    cout <<"\ngreatest distance is: "<<greatest;

    for (double x:distances){ // find smallest
        if (temp == 0){
            temp = x;
            smallest = x;
        }
        else {
            temp = x;
            if (temp < smallest){
                smallest = temp;
            }
            // else{
                // smallest = x;
            // }
        }

    }

    cout <<"\nsmallest distance is: "<<smallest;




    cout <<"\nsum of all routes distances is: "<<sum;


    return 0;
}



