//
//  Example 21: Functions can have the same namespace
//
//  Functions in C++ can share a name, as long as it is possible for the compiler
//  to figure out what function should be used.

#include <iostream>

using namespace std;

int sum(int a, int b) {
    cout << "Using int version.\n";
    return a + b;
}

double sum(double a, double b) {
    cout << "Using int version.\n";
    return a + b;
}

int main() {
    cout << sum(1.0, 2.0) << endl;
    cout << sum(3, 5) << endl;

    // The following gives an error!
    // cout << sum(3, 9.0) << endl;
    // Error:
    //
    // Exmaple21.cpp:24:13: error: call to 'sum' is ambiguous
    // cout << sum(3, 9.0) << endl;
    //         ^~~
    // Exmaple21.cpp:11:5: note: candidate function
    // int sum(int a, int b) {
    //     ^
    // Exmaple21.cpp:16:5: note: candidate function
    // double sum(double a, double b) {
    //        ^
    // 1 error generated.

    return 0;
}
