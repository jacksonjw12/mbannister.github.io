//
//  Example 20: Output Parameters
//
//  We can use reference parameters to 'return' more than one item. We can still
//  only return one value, but we can still use refence parameters to get data
//  out of the function.
//

#include <iostream>

using namespace std;

// This function divides a by b, returning the quotient and storing the remainder
// in the reference parameter 'r'.
int div(int a, int b, int &r);

int main() {
    int a = 19;
    int b = 7;
    int q = 0;
    int r = 0;
    q = div(a, b, r);
    cout << a << " / " << b << " = " << q << " r " << r << endl;
    return 0;
}

int div(int a, int b, int &r) {
    int q = a / b;
    r = a % b;
    return q;
}
