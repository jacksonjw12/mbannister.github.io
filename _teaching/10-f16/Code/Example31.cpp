//
// Example 12
//
// In this example we modify our grading program to process multiple students
// with out requiring user interaction. The information will be stored in
// parallel arrays.
//
#include <iostream>

using namespace std;

// Function declarations
double get_midterm_score();
double get_homework_score();
double get_final_score();
double compute_total_score(double homework, double midterm, double final);
char convert_to_grade(double total);
bool are_we_done();

// main function
int main() {
    const int sz = 3;
    string names[sz] = {"Bob", "Sam", "Tom"};
    double hw[sz] = {66.7, 80.2, 97.5};
    double mt[sz] = {88, 99, 89};
    double final[sz] = {95, 96, 98};
    double total[sz] = {0, 0, 0};
    string grades[sz];
    
    for(int i = 0; i < sz; i++) {
        total[i] = compute_total_score(hw[i], mt[i], final[i]);
        grades[i] = convert_to_grade(total[i]);
        cout << names[i] << " has grade " << grades[i] << endl;
    }
    
    return 0;
}

// Function definitions

double get_midterm_score() {
    double midterm = 0;
    cout << "Midterm score: ";
    cin >> midterm;
    return midterm;
}

double get_homework_score() {
    double homework = 0;
    cout << "Homework score: ";
    cin >> homework;
    return homework;
}

double get_final_score() {
    double final = 0;
    cout << "Final score: ";
    cin >> final;
    return final;
}

double compute_total_score(double homework, double midterm, double final) {
    return 0.20 * homework + 0.30 * midterm + 0.50 * final;
}

char convert_to_grade(double total) {
    char grade = ' ';
    
    if (total > 90) {
        grade = 'A';
    }
    else if (total > 80) {
        grade = 'B';
    }
    else if (total > 70) {
        grade = 'C';
    }
    else if (total > 60) {
        grade = 'D';
    }
    else {
        grade ='F';
    }
    return grade;
}

bool are_we_done() {
    char response;
    cout << "Are you done (Yy/Nn)? ";
    cin >> response;
    return (response == 'Y') || (response == 'y');
}
