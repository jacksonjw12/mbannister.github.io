//
//  Example 18: void returning functions
//
//  Sometime we do not need a function to return anything. In these cases there
//  is some other action we care about, called a side effect. In this Example
//  we will use a such a function for printing a errors.

#include <iostream>
#include <string>

using namespace std;

// For these functions we only care about the fact that they print something. We
// do not need them to return anything at all. For such functions the return
// type is 'void'.
void warn(string msg);
void error(string msg);

int main() {
    warn("That's not good!");
    error("That's bad!");
    return 0;
}

void warn(string msg) {
    cout << "WARNING: " << msg << endl;
}

void error(string msg) {
    cout << "ERROR: " << msg << endl;
}
