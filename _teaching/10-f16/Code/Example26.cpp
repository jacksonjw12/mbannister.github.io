// Example 26: Finding the index of the maximum element in an array
//
// This example extends our max function from before by also finding the index
// of the max value.
//
#include <iostream>

using namespace std;

// Since we want to return both the index and the maximum value one of the two
// values will need to be returned using call-by-reference.
int argmax(int A[], int sz, int &max_value);

int main()
{
    int A[5];
    A[0] = 4;
    A[1] = 12;
    A[2] = 3;
    A[3] = 42;
    A[4] = 9;
    
    int max_index = 0;
    int max_value = 0;
    max_index = argmax(A, 5, max_value);
    cout << "index = " << max_index << " value = " << max_value << endl;
    return 0;
}

int argmax(int A[], int sz, int &max_value) {
    int max_index = 0;
    max_value = A[max_index];
    for(int i = 1; i < sz; i++) {
        if (A[i] > max_value) {
            max_index = i;
            max_value = A[max_index];
        }
    }
    return max_index;
}
