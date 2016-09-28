//
//  main.cpp
//  Example07
//
//  Let's plan for retirement!
//
//  Facts:
//    1) We will save 5,500 a year (max contribution for IRA)
//    2) We will have a 7% annual growth in our investment
//    3) We will contribute for 35 years
//
//  We want to know:
//    a) How much did we invest
//    b) How much money will we have after 35 years
//

#include <iostream>

using namespace std;

int main() {
    
    // The "const" keyword here makes it so this value can never change!
    // It is a variable that does not vary!
    const double annual_growth = 0.07;
    
    double age_now = 0;
    double age_retire = 0;
    
    cout << "How old are you now? ";
    cin >> age_now;
    cout << "At what age would you like to retire? ";
    cin >> age_retire;
    
    double annual_savings = 0;
    cout << "How much will you save each year for retirement? ";
    cin >> annual_savings;
    
    double total = 0;
    cout << "How much do you currently have saved? ";
    cin >> total;
    
    for (int year = 0; year  < age_retire - age_now; year++) {
        total += annual_growth * total + annual_savings;
    }
    
    cout << "You will have contributed " << annual_savings * (age_retire - age_now) << ".\n";
    cout << "You will have $" << total << " for your retire!\n";
    
    return 0;
}
