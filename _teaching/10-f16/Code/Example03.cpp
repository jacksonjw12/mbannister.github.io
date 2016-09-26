//
//  main.cpp
//  Example03
//
//  Grade Calculation:
//  This program calculates the grade of a student in a class where
//  the homework is worth 20%, the midterm is worth 30% and the
//  final is worth 50%.
//
//  This example add conversion to a letter grade based on a standard scale.
//

#include <iostream>

using namespace std;

int main() {
    
    double midterm = 0;
    double homework = 0;
    double final = 0;
    
    cout << "Midterm score: ";
    cin >> midterm;
    cout << "Homework score: ";
    cin >> homework;
    cout << "Final score: ";
    cin >> final;
    
    double total = 0.20 * homework + 0.30 * midterm + 0.50 * final;
    
    cout << "Your total score is " << total << "\n";
    cout << "Your grade for the course is ";
    
    if (total > 90) {
        cout << "A\n";
    }
    else if (total > 80) {
        cout << "B\n";
    }
    else if (total > 70) {
        cout << "C\n";
    }
    else if (total > 60) {
        cout << "D\n";
    }
    else {
        cout << "F\n";
    }
    
    return 0;
}
