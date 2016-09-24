//
//  main.cpp
//  Example01
//
//  Grade Calculation:
//  This program calculates the grade of a student in a class where the homework
//  is worth 20%, the midterm is worth 30% and the final is worth 50%.
//

#include <iostream>

using namespace std;

int main() {

    double midterm = 65;
    double homework = 98;
    double final = 81;

    double total = 0;

    total = 0.20 * homework + 0.30 * midterm + 0.50 * final;

    cout << "Your total course grade is: ";
    cout << total;
    cout << "\n";


    return 0;
}
