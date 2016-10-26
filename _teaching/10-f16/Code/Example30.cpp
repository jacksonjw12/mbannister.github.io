// Example 30: Accessing the characters in a string
//
// To access the characters within a string we can use [] just like with arrays
// or we can use .at(). The advantage of the .at() is that you will be given a
// friendly error if you access an invalid part of the string.
//
// In this example I will use some "is*" functions from cctypes to check the
// quality of a password. There are much better methods of checking password
// quality than requiring a diversity of character types, but many website
// disagree!
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int lower_count = 0;
    int upper_count = 0;
    int digit_count = 0;
    int special_count = 0;

    string password;
    cout << "Enter a password to be evaluated: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
       char c = password.at(i);
       if (islower(c)) {
           lower_count++;
       } else if (isupper(c)) {
           upper_count++;
       } else if (isdigit(c)) {
           digit_count++;
       } else if (ispunct(c)) {
           special_count++;
       } else {
           cout << "I don't think " << c << " is a valid character!\n";
       }
    } 

    cout <<"Your password has " << lower_count << " lower case, "
                                << upper_count << " upper case, "
                                << digit_count << " digits, "
                                << "and " << special_count << " special characters.\n";
    return 0;
}
