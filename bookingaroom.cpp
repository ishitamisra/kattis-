
#include <iostream>
using namespace std;



int main() {
    
    //define r, n, and hotel rooms
    
    int r;
    int n;
    cin >> r;
    cin >> n;
    bool hotel[r+1];
    
    for (int i = 1; i < r + 1; i++) {
        hotel[i] = true; //true = available room
    }
    
    if (r == n) {
    cout << "too late" << endl;
    return 0;
    }
 
   //hotel array
    int room = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> room;
        hotel[room] = false; //mark booked rooms with false
    }

    for (int j = 1; j <= r; j++) {
        if (hotel[j] == true) {
            cout << j << endl;
            return 0;
        }
    }
    
}
