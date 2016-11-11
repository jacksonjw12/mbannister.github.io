
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ifstream in_stream;
    in_stream.open("/Users/michael/Documents/CSCI10/Example36/Example36/input.txt");
    if (in_stream.fail()) {
        cout << "Failed to open input.txt" << endl;
        exit(1);
    }
    int count = 0;
    in_stream >> count;
    
    double avg = 0;
    for (int i = 0; i < count; i++) {
        double num = 0;
        in_stream >> num;
        avg += num;
    }
    in_stream.close();
    avg /= count;
    cout << "Avg = " << avg << ".\n";
    
    
    return 0;
}
