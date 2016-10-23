// Example 24: With with array arguments to functions: size parameter
//
//  This example shows how to use arrays as arguments to functions. Since arrays
//  are unaware of their own size, we must have an argument for the size of the
//  array. Also, arrays will always behave as call-by-reference.

#include <iostream>

using namespace std;

// Fills an array with the value 'value'
void fill(int A[], int sz, int value);
// Sums all the entries in the array A
int sum(int A[], int sz);

int main()
{
    const int sz = 10;
    int A[sz];
    fill(A, sz, 6);
    cout << "Sum = " << sum(A, sz) << endl;
    return 0;
}

void fill(int A[], int sz, int value) {
    for (int i = 0; i < sz; i++) A[i] = value;
}

int sum(int A[], int sz) {
    int sum = 0;
    for (int i = 0; i < sz; i++) sum += A[i];
    return sum;
}
