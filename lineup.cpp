#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {
    int players; 
    cin >> players;
    
    vector<string> s(players);
    string pattern = "";
    
    //create vector s 
    string name;
    for (int i = 0; i < players; i++)
    {   
        cin >> name;
        s[i] = name;
    }
    
    //determine starting pattern
    if (s[1] > s[0]) {
        pattern = "INCREASING";
    }
    
    else {
        pattern = "DECREASING";
    }
    
    //check if pattern is being maintained through vector
    for (int i = 1; i < players -1; i++) {
        if (pattern == "INCREASING") {
            if (s[i+1] < s[i]) {
                pattern = "NEITHER";
                break;
            }
        }

            
        else {
            if (s[i+1] > s[i]) {
                pattern = "NEITHER";
                break;
            }
        }
    }
    cout << pattern << endl;
    return 0;
}


// print pattern after running the for loop.
