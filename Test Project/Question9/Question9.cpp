//
//  Question9.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//
/*

    The following program skeleton asks for an angle in degrees and converts it to radians.
    The formatting of the final output is left to you.
 
 */

#include "Question9.hpp"

using namespace std;

void Question9()
{
    cout << "Question 9" << endl;
    
    const double PI = 3.14159;
    double degrees, radians;
    cout << "Enter an angle in degrees and I will convert it\n";
    cout << "to radians for you: ";
    cin >> degrees;
    radians = degrees * PI / 180;
    
    // Display the value in radians left justified, in fixed
    // point notation, with 4 places of precision, in a field
    // 5 spaces wide, making sure the decimal point is always displayed.
    cout << setw(5) << fixed << setprecision(4) << left << showpoint << radians << endl;
    
    // return 0;
}
