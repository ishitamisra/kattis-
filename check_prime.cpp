
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    //ask user for N number, create isPrime array 
    int N;
    cin >> N;
    
    bool isPrime[N+2];
    for (int i = 2; i < N + 2; i++) {
        isPrime[i] = true;
    }
    
    //nested for loop 
    for (int i = 2; i < N + 2; i++) {
        //check for factors of i from 2 -  square root of i 
        for (int j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                isPrime[i] == false;
                break;
            }
        }
        //print if number is prime or complement
        if (isPrime[i] == true) {
            cout << i << " is prime" << endl;
        }
        
        else {
            cout << i << " is a complement" << endl;
        }
    }
    return 0;
}
