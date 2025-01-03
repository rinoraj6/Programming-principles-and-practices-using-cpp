// write a program where you enter a set of name and value pairs 
// eg : 'joe' 17 vector = names vector = scores
// terminate input when 'noname 0'

#include <iostream>
#include <vector>
using namespace std;

int main (){

    vector<string> names;
    vector<int> scores;
    cout <<"Enter name and scores (use noname 0 for termination) : ";

    while (true){
        string name; 
        int score;
        cin >>name>>score;
        if (name == "noname" && score == 0){
            break;
        }

        bool duplicate_name_found = false; // duplicate check
    
        for (string unique_name:names){
                if (unique_name == name ){
                    cout <<"error. duplicate name :("<<endl;
                    duplicate_name_found = true;  // duplicate found 
                    break;
                }
            }

        if (duplicate_name_found){ // if duplicate found skips the name and score
            continue;
        }

        else{    
            names.push_back(name); // name to names
            scores.push_back(score); // score to scores
        }
    }

    for (int i = 0;i<names.size();i++){
        cout <<names[i] <<" "<<scores[i]<<endl; // name and score related to the name in a single line
    }

// ask the user for a name and outputs its score if not error "not found"

    cout <<endl;

    string name_score;
    int pos = 0;
    cout << "who's score you want to know (enter name) : "; // 
    cin >>name_score;
    bool name_found = false;
    for (int i = 0;i<names.size();i++){
        if (names[i] == name_score){
            pos = i;
            name_found = true;
        }
    }
    if (name_found){
            cout <<names[pos]<<" "<<scores[pos];
        }
    else{
            cout <<"error. name not found";
        }
    
    return 0;
}