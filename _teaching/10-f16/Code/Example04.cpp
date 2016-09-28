//
//  main.cpp
//  Example04
//
//  This is just a silly example of a reasonably complicated boolean expression.
//

#include <iostream>

using namespace std;

int main() {
    
    int number = 0;
    cout << "Please enter an even number or a number between 1 and 100: ";
    cin >> number;
    
    if ( (number % 2 == 0) || ( (1 <= number) && (number <= 100) ) ) {
        cout << "Thank you!\n";
    } else {
        cout << "Your number was invalid!\n";
    }
    
    return 0;
}
