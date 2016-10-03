#include <iostream>

using namespace std;

int main() {

    int a = 1;
    int b = 2;
    int c = 3;
    int A = 4;
    int B = 5;

    if (B < A || (b < c && a < c)) {
        cout << "TRUE!!!\n";
    } else {
        cout << "FALSE!!!\n";
    }

    cout << (b + B) % A << "\n";
    a += c;
    cout << a * b * c << "\n";
    cout << ++a << "\n";
    cout << a << "\n";
    cout << b++ << "\n";
    cout << b << "\n";

    return 0;
}
