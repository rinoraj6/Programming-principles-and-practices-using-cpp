// write a program to find the mean,mode,min,max of a given set of positive integers


#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> numbers = {12,2,2,4,5,3};
    int min,max,mode = 0,mean;
    int prev = 0;
    int max_prev = 0;
    int sum = 0;

    cout <<"numbers: ";
    for(int x:numbers){
        cout <<x<<" ";
    }

    // mean
    for (int x:numbers){
        sum += x;
    }    
    cout <<"\nsum : "<<sum<<endl;
    cout <<"mean : "<<sum / numbers.size()<<endl;

    // min
    for (int i = 0;i<numbers.size();i++){
        if (prev == 0){
            min = numbers[i];
            prev = numbers[i];
        }
        else{
            if (min > numbers[i]){
                min = numbers[i];
            }
        }
    }
    cout<<"min: "<<min<<endl;

    // max
    for (int i = 0;i<numbers.size();i++){
        if (max_prev == 0){
            max = numbers[i];
            max_prev = numbers[i];
        }
        else{
            if (max < numbers[i]){
                max = numbers[i];
            }
        }
    }
    cout<<"max: "<<max<<endl;

    // mode
    int mode_val = 0;
    for (int i = 0;i<numbers.size();i++){
        for (int j = 1;j<numbers.size();j++){
            if (numbers[i] == numbers[j]){
                mode_val += 1;
            }
            if (mode_val >1){
                mode = numbers[i];
            }

        }
        mode_val = 0;
    }

    cout <<"mode: "<<mode;






    return 0;
}

