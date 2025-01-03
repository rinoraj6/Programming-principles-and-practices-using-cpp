// build a simple dictionary 

#include <iostream>
#include <vector>

using namespace std;

int main (){

    vector <string> words;
    for (string temp;cin >>temp;)
        words.push_back(temp);
    cout <<"number of words: "<<words.size()<<"\n";
    for(string s:words){
        cout <<s<<"\n";
    }
    return 0;
}