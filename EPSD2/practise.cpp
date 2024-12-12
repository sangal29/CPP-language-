#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The prime numbers are: ";

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        // Start j from 2 and check up to sqrt(i)
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl; // Just to add a new line after printing the primes
    return 0;
}
