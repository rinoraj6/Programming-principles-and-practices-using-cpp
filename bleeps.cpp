// write a program that bleeps out the words you dislike

#include <iostream>
#include <vector>
using namespace std;

int main (){

    string dislike_one = "fuck";
    string dislike_two = "asshole";
    string dislike_three = "puta";
    vector <string> dialogue;
    cout <<"enter a dialogue:";
    for (string word;cin >>word;)
        dialogue.push_back(word);

    for (int i = 0; i<dialogue.size();i++)
        if (dialogue[i] == dislike_one || dialogue[i] == dislike_two || dialogue[i] == dislike_three)
            cout <<" bleep ";
        else
            cout <<" "<<dialogue[i]<<" ";

    return 0;
}