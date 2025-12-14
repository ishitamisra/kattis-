
#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    unordered_set<string> s;
    int T;
    cin >> T;

    int trips;
    string city;
    for (int i = 0; i < T; i++) {
        int unique_added = 0;
        cin >> trips;
        for (int t = 0; t < trips; t++) {
            cin >> city;
            if (s.insert(city).second == true) {
                unique_added++;
            }

        }
        cout << unique_added << endl;

    }
    
    return 0;
}


//counting unique elements in unordered set 
