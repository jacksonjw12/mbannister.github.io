//
//  The following program prints a Box of X's and is based on the solution we
//  discussed in class.
//

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int m = 0;

    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << "Please enter another positive integer: ";
    cin >> m;

    cout << "I will make you a " << n << " by " << m << " box!\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "X";
        }
        cout << "\n";
    }
    cout << "Have a nice day!\n";

    return 0;
}
