//
//  Question16.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 
 Sales Bar Chart
      Write a program that asks the user to enter today’s sales for five stores. The program should then display a
     bar graph comparing each store’s sales. Create each bar in the bar graph by displaying a row of asterisks.
     Each asterisk should represent $100 of sales.
 
     Here is an example of the program’s output.
     Enter today's sales for store 1: 1000 [Enter]
     Enter today's sales for store 2: 1200 [Enter]
     Enter today's sales for store 3: 1800 [Enter]
     Enter today's sales for store 4: 800 [Enter]
     Enter today's sales for store 5: 1900 [Enter]
 
    SALES BAR CHART
     (Each * = $100)
     Store 1: **********
     Store 2: ************
     Store 3: ******************
     Store 4: ********
     Store 5: *******************

*/

#include "Question16.hpp"

using namespace std;

void Question16()
{
    cout << "Question 16" << endl;
    
    int sales1, sales2, sales3, sales4, sales5;
    
    cout << "Enter today's sales for store 1: "; cin >> sales1;
    cout << "Enter today's sales for store 2: "; cin >> sales2;
    cout << "Enter today's sales for store 3: "; cin >> sales3;
    cout << "Enter today's sales for store 4: "; cin >> sales4;
    cout << "Enter today's sales for store 5: "; cin >> sales5;
    
    cout << endl;
    
    cout << "SALES BAR CHART" << endl
         << "(Each * = $100)" << endl;
    
    cout << "store 1: " << setw(sales1/100) << setfill('*') << "*" << endl;
    cout << "store 2: " << setw(sales2/100) << setfill('*') << "*" << endl;
    cout << "store 3: " << setw(sales3/100) << setfill('*') << "*" << endl;
    cout << "store 4: " << setw(sales4/100) << setfill('*') << "*" << endl;
    cout << "store 5: " << setw(sales5/100) << setfill('*') << "*" << endl;
    
    cout << endl;
}
