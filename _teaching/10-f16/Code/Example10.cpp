//
// This example has two user defined functions.
//

#include <iostream>

// User defined function declarations
int square(int n);
int cube(int n);

using namespace std;

// main function
int main() {
    int n = 0;
    cout << "n = ";
    cin >> n;
    cout << "n^2 is " << square(n) << "\n";
    cout << "n^3 is " << cube(n) << "\n";
    return 0;
}

// User defined function definitions
int square(int n) {
    return n * n;
}
int cube(int n) {
    return n * n * n;
}
