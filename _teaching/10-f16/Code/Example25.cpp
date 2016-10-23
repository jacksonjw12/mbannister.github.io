//  Example 25: Array out of bounds problems: no bounds checking
//
//  In this example will see that C style arrays have no bounds checking. This
//  means that you as the programmer must make sure you only ever use array
//  indexes that are within the valid range, 0 to n - 1 for a n-element array.
//
//  The strange part is that we can accidentally access other parts of memory
//  when using an invalid index!
//
//  Since this example does things that are not strictly allowed, the behavior
//  will differ by operating system.

#include <iostream>

using namespace std;

int main()
{
    int a = 77777;
    int b = 11111;
    int A[2];
    A[0] = 33333;
    A[1] = 44444;

    // Only A[0] and A[1] are valid reads, but notice that you will see the value
    // of a and b somewhere in the list.
    for (int i = -10; i < 10; i++) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    return 0;
}
