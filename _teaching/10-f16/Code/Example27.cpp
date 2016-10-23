//  Example 27: Over writing the null character
//
//  This example show how it is possible to leak secret information when the
//  programmer accidentally overwrite the null terminator of a c-string.
//
//  Since this is an example where I am doing something that is not valid, the
//  exact behavior will depend on the OS you are running your code in.
//
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char msg1[] = "My first secret message.";
    char msg2[] = "Hello World!";
    char msg3[] = "My second secret message.";

    // Overwrite the null terminator.
    msg2[12] = '!';
    msg2[13] = '!';
    msg2[14] = '!';
    msg2[15] = '!';

    // Print hello world and a little more...
    cout << msg2;
    return 0;
}
