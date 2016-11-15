//
//  This example shows how you can mix the string operator >> and getline.
//

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct NameAge {
    string name;
    int age;
};

int main() {
    int count = 0;
    NameAge names_and_ages[1000];
    
    // Open file
    ifstream in_file;
    in_file.open("/Users/michael/Documents/CSCI10/Example39/Example39/input.txt");
    if (in_file.fail()) {
        cout << "Can't find the file!!!!!!!!!!\n";
        exit(1);
    }
    // Read number of things
    in_file >> count;
    // Read file
    for (int i = 0; i < count; i++) {
        in_file.ignore(1000000, '\n');
        getline(in_file, names_and_ages[i].name);
        in_file >> names_and_ages[i].age;
    }
    // Close file
    in_file.close();
    // Print names and ages
    for (int i = 0; i < count; i++) {
        cout << names_and_ages[i].name << " is " << names_and_ages[i].age << endl;
    }
    
    return 0;
}
