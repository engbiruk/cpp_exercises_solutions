//
//  Question14.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 
 Convert the following while loop to a for loop:

     int count = 0;
     while (count < 50)
     {
         cout << "count is " << count << endl;
         count++;
     }
 
     for (int x = 50; x > 0; x−−)
     {
        cout << x << " seconds to go.\n";
     }
 */

#include "Question14.hpp"

using namespace std;

void Question14()
{
    cout << "Question 14" << endl;
    
    // to for loop
    for (int count = 0; count < 50; count++) {
        cout << "count is " << count << endl;
    }
    
    // to while loop
    int x = 50;
    while (x > 0) {
        cout << x << " seconds to go.\n";
        x--;
    }
}
