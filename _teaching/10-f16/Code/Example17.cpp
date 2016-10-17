//
//  Example 17: Block level scope
//
//  This example has two scoping errors. Make sure you understand them.

#include <iostream>

using namespace std;

int main() {
    
    for(int i = 0; i < 100; i++) {
        int sum = 0;
        sum += i;
    }
    cout << sum;
    
    int x = 9;
    
    if (x  < 100) {
        int z = 7;
        cout << z;
    } else {
        int z = 0;
        cout << z;
    }
    
    cout << z;
    
    return 0;
}
