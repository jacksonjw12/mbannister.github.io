//
//  Example 15: Global scope
//
//  Variables placed out side of a functions are global to the whole program and
//  can be accessed by any function.
//
//  As a general rule it is a bad idea to use global variables.
//

#include <iostream>

using namespace std;

int A = 5;
int B = 6;

int sum();

int main() {
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "A + B = " << A + B << endl;
    
    return 0;
}

int sum() {
    return A + B;
}
