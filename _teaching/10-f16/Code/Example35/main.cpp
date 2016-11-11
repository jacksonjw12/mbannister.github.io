
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ofstream out_stream;
    out_stream.open("/Users/michael/Documents/CSCI10/Example35/Example35/output.txt");
    if (out_stream.fail()) {
        cout << "Failed to open output.txt" << endl;
        exit(1);
    }
    for(int i = 0; i < 100; i++) {
        out_stream << "Hello file!" << endl;
    }
    out_stream.close();
    
    return 0;
}
