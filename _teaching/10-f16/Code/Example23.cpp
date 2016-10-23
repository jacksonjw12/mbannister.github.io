//Example 23: Algorithms on arrays: sum, min, max
//
// This example demonstrates some algorithms on arrays, specifically we find
// the min, max and sum.

#include <iostream>

using namespace std;

int main()
{
    // Get numbers from user
    int N;
    cout << "How many numbers would you like to enter? ";
    cin >> N;
    int nums[N];
    cout << "Please enter " << N << " integers separated by spaces: ";
    for (int i = 0; i < N; i++) cin >> nums[i];

    // Sum numbers from user
    int sum = 0; // Why is setting to zero here very important?
    for (int i = 0; i < N; i++) sum += nums[i];
    cout << "The sum of the numbers you entered is " << sum << "." << endl;

    // Find the min number
    int min = nums[0];
    for (int i = 1; i < N; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    cout << "The min of the numbers you entered is " << min << "." << endl;

    // Find the max number
    int max = nums[0];
    for (int i = 1; i < N; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    cout << "The max of the numbers you entered is " << max << "." << endl;
    return 0;
}
