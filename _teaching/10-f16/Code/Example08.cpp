//
//  This example uses math functions to solve a quadratic equation. This is an
//  extension of the example given in class.
//
//  The method used here is the quadratic formula you all know and love!
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double A = 0;
    double B = 0;
    double C = 0;
    
    cout << "This program find a value of x such that A*x^2 + B*x + C = 0,\n"
         << "assuming a real valued solution exists.\n";
    
    cout << "Enter a value for A: ";
    cin >> A;
    cout << "Enter a value for B: ";
    cin >> B;
    cout << "Enter a value for C: ";
    cin >> C;
    
    double D = B*B - 4*A*C;
    if (D < 0) {
        cout << "Sorry this polynomial does not have real roots...\n";
    } else {
        cout << "The roots of this polynomial is "
             << (-B + sqrt(D)) / (2*A)
             << " and "
             << (-B - sqrt(D)) / (2*A) << ".\n";
    }
    
    return 0;
}
