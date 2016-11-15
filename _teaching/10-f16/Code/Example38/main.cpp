#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct StudentRecord {
    string name;
    double homework;
    double midterm;
    double finalexam;
    double total;
    string grade;
};

struct GradeScheme {
    double midterm;
    double finalexam;
    double homework;
};

struct CSClass {
    GradeScheme gs;
    StudentRecord sr[1000];
    int size;
};

int main() {
    ifstream in_file;
    in_file.open("/Users/michael/Documents/CSCI10/Example38/Example38/sample_input.txt");
    
    // Header
    string line;
    getline(in_file, line);
    cout << line << endl;
    
    string word = "";
    int word_count = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] != ' ') {
            if (line[i] == ',') {
                if (0 < word_count && word_count < 4) {
                    string new_word = "";
                    bool valid = false;
                    for (int j = 0; j < word.size(); j++) {
                        if (valid && word[j] != ')') {
                            new_word += word[j];
                        }
                        if (word[j] == '(') {
                            valid = true;
                        }
                    }
                    double num = stod(new_word);
                    cout << num << endl;
                    
                }
                word = "";
                word_count++;
            } else {
                word += line[i];
            }
        }
    }
    
    in_file.close();
    return 0;
}
