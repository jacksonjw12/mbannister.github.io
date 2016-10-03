//
//  The following program prints all primes less than 1000, and is based on the
//  solution we discussed in class.
//
//  This example is fairly complicated and may take some time to fully absorb.
//
//  I have added comments in the code to explain what the code is doing.
//

#include <iostream>

using namespace std;

int main() {
    for (int n = 2; n < 1000; n++) {
        // Determine if n is prime.
        bool prime = true;
        for (int k = 2; k < (n - 1); k++) {
            // If k divides n, then n is not prime.
            if (n % k == 0) {
                prime = false;
            }
        }
        // If prime is still true, then the only factors of n are 1 and n.
        if (prime) {
            cout << n << "\n";
        }
    }

    return 0;
}
