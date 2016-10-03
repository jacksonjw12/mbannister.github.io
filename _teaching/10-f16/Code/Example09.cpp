//
//  This example uses the rand function to randomize a greeting.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    // In class I used
    //
    //   srand(time(0))
    //
    // which works, but also gives a warning. We will talk about "casting" later
    // in the course, but it basically means I am forcefully changing the type
    // of the variable.
    srand(static_cast<int>(time(0)));
    
    // Ignore the first call to random as it is just the time.
    rand();

    // I am using the % operator to restrict the possible values of r to 1, 2 or 3.
    int r = rand() % 3;
    
    if (r == 0) {
        cout << "Hello world!!!\n";
    } else if (r == 1) {
        cout << "Hi everyone!\n";
    } else {
        cout << "Go away!\n";
    }
    
    return 0;
}
