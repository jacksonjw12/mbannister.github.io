//
// This program provides an example of how to read a file line-by-line using
// the getline function.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    fstream in_file;
    in_file.open("input.txt");

    // How to use a while-loop to read a file line-by-line
    // string line = "";
    // while (getline(in_file, line)) {
    //     cout << ": " << line << endl;
    // }

    // How to use a for-loop to read a file line-by-line
    for (string line = ""; getline(in_file, line); ) {
        cout << ": " << line << endl;
    }

    in_file.close();
    return 0;
}
