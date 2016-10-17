//
//  Example 16: Function are call-by-value (pass-by-copy)
//
//  A function cannot modify its arguments
//

#include <iostream>

using namespace std;

int zero(int x);

int main() {
    int x = 7;
    int y = zero(x);
    cout << "x = " << x << " and " << "y = " << y << endl;
    return 0;
}

int zero(int x) {
    x = 0;
    return x;
}
