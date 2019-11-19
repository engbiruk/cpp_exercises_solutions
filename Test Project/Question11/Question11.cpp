//
//  Question11.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 
 Interest Earned
     Assuming there are no deposits other than the original investment, the balance in a savings account after one year maybe calculated as.
            𝐴𝑚𝑜𝑢𝑛𝑡=𝑃𝑟𝑖𝑛𝑐𝑖𝑝𝑎𝑙×(1+𝑅𝑎𝑡𝑒/𝑇)^𝑇
    Principal is the balance in the savings account, Rate is the interest rate, and T is the number of times the interest is compounded during a year (T is 4 if the interest is compounded quarterly).
 
    Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. It should display a report similar to
 
                         Interest Rate:         4.25%
                         Times Compounded:         12
                         Principal:         $ 1000.00
                         Interest:            $ 43.34
                         Amount in Savings: $ 1043.34
 
 */

#include "Question11.hpp"

using namespace std;

void Question11()
{
    cout << "Question 11" << endl;
    
    float amount, principal, interestRate, interest;
    int interestCompounded;
    
    // Accepting the required
    cout << "                       Enter the principal amount: "; cin >> principal;
    cout << "                   Enter the interest rate (in %): "; cin >> interestRate;
    cout << "Enter the number of interest compounded in a year: "; cin >> interestCompounded;
    
    // calulate the interest
    interestRate /= 100; // to change the interest rate percentage to value
    amount = principal * std::pow((1.0 + (interestRate / interestCompounded)), interestCompounded);
    interest = amount - principal;
    
    std::string perfect = std::to_string(1+2+4+7+14) + " is a perfect number";

    // format the ouput
    interestRate *= 100; // reforamt interestRate to percentage
    cout << setw(18) << left << "Interest Rate:";          cout << " "  << setw(8) << fixed << setprecision(2) << right << interestRate << "%" << endl;
    cout << setw(18) << left << "Times Compounded:";       cout << "  " << setw(8) << fixed << setprecision(2) << right << interestCompounded << endl;
    cout << setw(18) << left << "Principal:";              cout << " $" << setw(8) << fixed << setprecision(2) << right << principal << endl;
    cout << setw(18) << left << "Interest:";               cout << " $" << setw(8) << fixed << setprecision(2) << right << interest << endl;
    cout << setw(18) << left << "Amount in Savings:";      cout << " $" << setw(8) << fixed << setprecision(2) << right << amount << endl;

}
