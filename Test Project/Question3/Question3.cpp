//
//  Question3.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
    Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
    The tax should be 6.75 percent of the meal cost.
    The tip should be 20 percent of the total after adding the tax.
    Display the meal cost, tax amount, tip amount, and total bill on the screen.
 */

#include "Question3.hpp"

using namespace std;

void Question3() {
    cout << "Question 3" << endl;
    
    // variables for restaurnat bill
    float tax, tip, mealCost= 88.67, total, totalFinal;
    // calculate tax
    // tax = 6.75% of meal cost
    tax = 6.75 * mealCost / 100;
    // calculate the total
    // total = meal cost added by tax
    total = mealCost + tax;
    // calculate tip
    // tip = 20% of total
    tip = 20 * total / 100;
    // total final becomes the addition of the bill + tip
    totalFinal = total + tip;
    cout<< endl;
    cout<< setw(27) << "Restaurant Bill" << endl;
    cout<< setw(27) << right << setfill('*') << "*" << endl << setfill(' ');
    
    cout<< setprecision(2) << fixed;
    cout<< setw(20) << "Meal Cost: " << setw(7)         << mealCost<< endl;
    cout<< setw(20) << "Tax: "       << setw(7)         << tax << endl;
    cout<< setw(20) << "Tip: "       << setw(7)         << tip << endl;
    cout<< setw(27) << right         << setfill('-')    << "-" << endl;
    cout<< setw(20) << setfill(' ')  << "Total: "       << setw(7) << total << endl;
    cout<< setw(20) << setfill(' ')  << "Total Final: " << setw(7) << totalFinal << endl;
    
    cout<< setw(27) << right << setfill('-') << "-"     << endl;
}


