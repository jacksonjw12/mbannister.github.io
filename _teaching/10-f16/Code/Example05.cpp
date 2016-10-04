//
//  main.cpp
//  Example05
//
//  In this example we take the code from Example03 and allow the user to repeat
//  the calculations. Very few lines have changes.
//

#include <iostream>

using namespace std;

int main() {
    // We start with done == false, as we assume the user want to compute at
    // at least one students grade.
    bool done = false;

    while ( !done ) {

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

        char response;
        cout << "Are you done (Yy/Nn)? ";
        cin >> response;

//        In class I used the code below, which is correct, but I have changed
//        it to "better" code.
//
//        if (response == 'Y' || response == 'y') {
//            done = true;
//        }
        done = (response == 'Y') || (response == 'y');

    } // end of while loop; exits when done == true.

    return 0;
}
