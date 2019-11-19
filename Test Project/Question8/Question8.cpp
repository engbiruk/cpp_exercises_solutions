//
//  Question8.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
     Write coutstatements with stream manipulators that perform the following:
         A.Display the number 34.789 in a field of nine spaces with two decimal places of precision.
         B.Display the number 7.0 in a field of five spaces with three decimal places of precision.
             The decimal point and any trailing zeroes should be displayed.
         C.Display the number 5.789e+12 in fixed point notation.
         D.Display the number 67 left justified in a field of seven spaces
 */

#include "Question8.hpp"

using namespace std;

void Question8()
{
    cout << "Question 8" << endl;
    
    //    A.Display the number 34.789 in a field of nine spaces with two decimal places of precision.
    cout<< setw(9) <<setprecision(2) << fixed << 34.789 << endl;
    
    //    B.Display the number 7.0 in a field of five spaces with three decimal places of precision.
    cout<< setw(5) << setprecision(2) << fixed << showpoint << 7.0 << endl;
    
    //    C.Display the number 5.789e+12 in fixed point notation.
    cout << fixed << 5.789e+12 << endl;
    
    //    D.Display the number 67 left justified in a field of seven spaces
    cout<< setw(7) << left << 67 << endl;
    
}
