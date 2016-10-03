//
//  The follwoing program prints a number in binary (unfortunately the order is
//  backwards). This program is based on a solution given in class.
//
//  This one is also pretty tricky so take some time with it.
//
//  Note: Later in the term we will fix this backwards problem.
//

#include <iostream>

using namespace std;

int main() {
    int n =  0;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "The backwards binary representation of " << n << " is ";
    while (n > 0) {
        cout << n % 2;
        n /= 2;
    }
    cout << "\n";
}
