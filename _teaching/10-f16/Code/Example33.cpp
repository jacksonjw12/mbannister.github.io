//
// Example 33
//
// Our grading example is almost reaching its final form. In this version we
// convert the program to using structs instead of parallel arrays. This will
// help to key our information organized.
//

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    double homework;
    double midterm_exam;
    double final_exam;
    double total;
    string grade;
};

Student get_student_record();
void update_total_score(Student &s);
void update_grade(Student &s);
void print_student_record(Student s);

int main() {
    Student s = get_student_record();
    update_total_score(s);
    update_grade(s);
    cout << endl << endl;
    print_student_record(s);
    return 0;
}


Student get_student_record() {
    Student s;
    cout << "First name: ";
    string first_name;
    cin >> first_name;
    cout << "Last name: ";
    string last_name;
    cin >> last_name;
    s.name = first_name + " " + last_name;
    cout << "Homework score: ";
    cin >> s.homework;
    cout << "Midterm score: ";
    cin >> s.midterm_exam;
    cout << "Final score: ";
    cin >> s.final_exam;
    return s;
}

void update_total_score(Student &s) {
    s.total = 0.20 * s.homework + 0.30 * s.midterm_exam + 0.50 * s.final_exam;
}

void update_grade(Student &s) {
    if (s.total > 90) {
        s.grade = "A";  
    } else if (s.total > 80) {
        s.grade = "B";
    } else if (s.total > 70) {
        s.grade = "C";
    } else if (s.total > 60) {
        s.grade = "D";
    } else {
        s.grade = "F";
    }
}

void print_student_record(Student s) {
    cout << "Name: " << s.name << endl
         << "Homework: " << s.homework << endl
         << "Midterm: " << s.midterm_exam << endl
         << "Final: " << s.final_exam << endl
         << "Total: " << s.total << endl
         << "Grade: " << s.grade << endl;
}

