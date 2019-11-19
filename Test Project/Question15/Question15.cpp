//
//  Question15.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 // This program adds two numbers entered by the user.
 
    * Find the errors:
 
    #include <iostream>
     using namespace std;
     int main()
     {
         int num1, num2;
         char again;
         while (again == 'y' || again == 'Y')
         cout << "Enter a number: ";
         cin >> num1;
         cout << "Enter another number: ";
         cin >> num2;
         cout << "Their sum is << (num1 + num2) << endl;
         cout << "Do you want to do this again? ";
         cin >> again;
         return 0;
     }
 */

#include "Question15.hpp"

using namespace std;

void Question15()
{
    cout << "Question 15" << endl;
    
    int num1, num2;
    char again = 'y';
    while (again == 'y' || again == 'Y')
    {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;
        cout << "Their sum is " << (num1 + num2) << endl;
        cout << "Do you want to do this again? ";
        cin >> again;
    }
    
}
