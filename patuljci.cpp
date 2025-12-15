#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {

    int num = 0;
    int S = 0;
    vector<int> v(9);
    for (int i = 0; i < 9; i++){
        cin >> num;
        v[i] = num;
        S += num;
    }

    int pairS = S - 100;
    unordered_map<int, int> mp;

    int a = 0;
    int b = 0;
    int target = 0;

    for (int i = 0; i < 9; i++) {
        target = pairS - v[i];
        if (mp.count(target)) {
            a = v[i];
            b = target;
            mp[v[i]] = i;
            break;
        }
        mp[v[i]] = i;
    }

    for (int j = 0; j < 9; j++) {
        if (v[j] == a || v[j] == b) continue;
        cout << v[j] << endl;
    }

    return 0;
}

//basically 2sum lol
