//
// The following program computes the GCD of two numbers, and although there are
// many faster algorithms this one is straight from the definition!
//

#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    cout << "Please enter a number: ";
    cin >> a;
    cout << "Please enter a number: ";
    cin >> b;

    // Set d to the smaller of a and b
    int d = 0;
    if (a < b) {
        d = a;
    } else {
        d = b;
    }

    // While it is not the case that d divides both a and b keep decrementing d
    while (!(a % d == 0 && b % d == 0)) {
        d--;
    }

    cout << "The GCD of " << a << " and " << b << " is " d << ".\n";

    return 0;
}
