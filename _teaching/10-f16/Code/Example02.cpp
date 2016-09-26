//
//  main.cpp
//  Example02
//
//  Grade Calculation:
//  This program calculates the grade of a student in a class where
//  the homework is worth 20%, the midterm is worth 30% and the
//  final is worth 50%.
//
//  This example add user input and check for a negative score.
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
    
    cout << "Your total score is ";
    if (total < 0) {
        cout << "NEGATIVE!\n";
    }
    else {
        cout << total << "\n";
    }
    
    return 0;
}
