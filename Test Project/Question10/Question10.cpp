//
//  Question10.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
   There are three seating categories at a stadium.
    For a softball game,
            Class A seats cost $15,
            Class B seats cost $12, and
            Class C seats cost $9.
        Write a program that asks howmany tickets for each class of seats were sold, then displays the amount of income generated from ticket sales. Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.
 
 */

#include "Question10.hpp"

using namespace std;

void Question10()
{
    cout << "Question 10" << endl;
    
    int numberOfClassATicketes, numberOfClassBTicketes, numberOfClassCTicketes;
    int classATicketCost = 15, classBTicketCost = 12, classCTicketCost = 9;
    
    cout << "Enter how many tickets are sold for the class A tickets: "; cin >> numberOfClassATicketes;
    cout << "Enter how many tickets are sold for the class B tickets: "; cin >> numberOfClassBTicketes;
    cout << "Enter how many tickets are sold for the class C tickets: "; cin >> numberOfClassCTicketes;
    
    float totalRevenue =    (classATicketCost * numberOfClassATicketes) +
                            (classBTicketCost * numberOfClassBTicketes) +
                            (classCTicketCost * numberOfClassCTicketes) ;
    
    cout << endl << "Income Generated From All Tickets is: "
         << fixed << setprecision(2) << showpoint << totalRevenue << endl;

    
}
