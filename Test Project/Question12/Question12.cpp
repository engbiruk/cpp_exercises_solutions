//
//  Question12.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 Convert the following if/else if statement into a switch statement:
     if (choice == 1)
     {
        cout<< fixed << showpoint<< setprecision(2);
     } else if (choice == 2 || choice == 3)
     {
        cout<< fixed << showpoint<< setprecision(4);
     } else if (choice == 4)
     {
        cout<< fixed << showpoint<< setprecision(6);
     } else
     {
        cout<< fixed << showpoint<< setprecision(8);
     }
 
 */

#include "Question12.hpp"

using namespace std;

void Question12()
{
    cout << "Question 12" << endl;
    
    short choice;
    
    cout << "Enter your choice:> ";
    cin >> choice;
   
    switch (choice) {
        case 1:
            cout<< fixed << showpoint << setprecision(2);
            break;
        case 2:
        case 3:
            cout<< fixed << showpoint << setprecision(4);
            break;
        case 4:
            cout<< fixed << showpoint << setprecision(6);
            break;
        default:
            cout<< fixed << showpoint << setprecision(8);
            break;
    }
    
    cout << 3.1415926535 << endl;
}
