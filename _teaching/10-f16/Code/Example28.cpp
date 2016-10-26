// Example 28: String obejcts
//
// The string object implements many improvements to c-strings. For the most
// part you can work with string objects just as you would other variables types
// like int, floats, etc...
//
// In particular string in C++ are call-by-value (pass-by-copy) by default, i.e.,
// functions cannot modify string arguments. This is different than arrays and
// c-strings (which are just arrays of characters).
//

#include <iostream>
#include <string>


using namespace std;

int main() {
    // Create two string objects
    string first_name;
    string second_name;

    // Get the users name
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> second_name;

    // Create message using + to concatenate strings.
    string msg = "Hello " + first_name + " " + second_name + "!";

    // Print the greeting
    cout << msg << endl;

    // Print some other random facts
    cout << "Your first name has " << first_name.length() << " letters." << endl;

    return 0;
}
