//
//  In this example we refactor our grading program by breaking it up into
//  small functions.
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
    bool done = false;
    while (!done) {
        double homework = get_homework_score();
        double midterm = get_midterm_score();
        double final = get_final_score();
        
        double total = compute_total_score(homework, midterm, final);
        char grade = convert_to_grade(total);
        
        cout << "Your total score is " << total
             << " and your grade is " << grade << ".\n";
        
        done = are_we_done();
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
