// Example 22
// Basics of working with arrays: reading, writing, printing, copying
//
// Notice that to do just about anything with arrays requires a for-loop.

#include <iostream>

using namespace std;

int main()
{
    // Set the size of the array to a constant
    const int sz = 10;

    // Create two arrays of size sz
    int A[sz];
    int B[sz];

    // Assign the values:
    // A = {0,1,2,3,4,5,6,7,8,9}
    for (int i = 0; i < sz; i++) A[i] = i;
    // B = {0,0,0,0,0,0,0,0,0,0}
    for (int i = 0; i < sz; i++) B[i] = 0;

    // Print the content of each of the arrays
    cout << "A = ";
    for (int i = 0; i < sz; i++) cout << A[i] << " ";
    cout << endl;

    cout << "B = ";
    for (int i = 0; i < sz; i++) cout << B[i] << " ";
    cout << endl;

    // Copy the contents of array A to B.
    // WARNING: B = A will NOT work! You must copy cell by cell!
    for (int i = 0; i < sz; i++) B[i] = A[i];

    // Print the content of each of the arrays
    cout << "A = ";
    for (int i = 0; i < sz; i++) cout << A[i] << " ";
    cout << endl;

    cout << "B = ";
    for (int i = 0; i < sz; i++) cout << B[i] << " ";
    cout << endl;

    return 0;
}
