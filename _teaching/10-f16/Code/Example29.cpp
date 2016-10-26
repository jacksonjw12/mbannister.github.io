// Example 29: A few more string things
//
// In this example we use < to compare to strings alphabetically. You can also
// use the other comparisons: <, >, ==, <=, >=, !=. Additionally, we use substr
// to extract a part of the string.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string word1;
    string word2;
    cout << "Enter a word (with 2 or more letters): ";
    cin >> word1;
    cout << "Enter another word (with 2 or more letters): ";
    cin >> word2;
    
    if (word2 < word1) {
        string tmp = word1;
        word1 = word2;
        word2 = tmp;
    }

    cout << word1 << " comes before " << word2 << " alphabetically" << endl;
    cout << "The first two letters of " << word1 << " are " << word1.substr(0,2) << endl;

    return 0;
}
