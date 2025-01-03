// vector programming

#include <iostream>
#include <vector>
using namespace std;


int main (){
    vector<int> v = {1,2,3,4,5,6,7,8,9};

    for (int i = 0;i<v.size();i++){
        if (v[i] % 9 == 0){
            v.erase(v.begin()+i);
        }
    }
    for (int x:v){
        cout <<x<<" ";
    }

    

    return 0;
}

    