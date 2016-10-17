//
//  Example 14: Local variables
//
//  Notice that there are to different s variables below: one local to main and
//  one local to sum.
//

#include <iostream>

using namespace std;

int sum(int a, int b);


int main() {
    int a = 2;
    int b = 3;
    int s = 7;
    cout << "a + b = " << sum(a, b) << endl;
    cout << "s = " << s << endl;
    return 0;
}

int sum(int a, int b) {
    int s = a + b;
    return s;
}
