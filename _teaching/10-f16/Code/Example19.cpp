//
//  Example 19: Reference Parameters
//
//  We can selectively give a function permission to modify its parameters.
//

#include <iostream>

using namespace std;

// This function sets the parameter n to zero
void zero(int &n);
// This function will swap the values in its two parameters
void swap(int &a, int &b);

int main() {
    int a = 1;
    int b = 5;
    cout << "a = " << a << "    " << "b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << "    " << "b = " << b << endl;
    zero(a);
    cout << "a = " << a << "    " << "b = " << b << endl;

    return 0;
}

void zero(int &n){
    n = 0;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
