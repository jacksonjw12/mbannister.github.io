//
//  main.cpp
//  Example06
//
//  This example introduces the for loop, and uses it to print Hello!!! several
//  times.
//

#include <iostream>

using namespace std;

int main() {
    
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    // Method A) Here is how we can print hello n times with a while loop
    int i = 0;
    while (i < n) {
        cout << i << " : " << "Hello!!!\n";
        i++;
    }
    
    // Method B) Here is how we can print hello n times with a for loop
    for (int j = 0; j < n; j++){
        cout << j << " : " << "Hello!!!\n";
    }
    
    // Although, methods A and B look different, they actually have exactly the
    // same meaning!

    return 0;
}
