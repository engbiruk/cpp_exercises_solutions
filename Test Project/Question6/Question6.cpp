//
//  Question6.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*

 What will the following program display?
 
 */


#include "Question6.hpp"

using namespace std;

void Question6()
{
    cout << "Question 6" << endl;
    
    int integer1, integer2;
    double result;
    integer1 = 19;
    integer2 = 2;
    result = integer1 / integer2;
    cout<< result << endl; // 9
    result = static_cast<double>(integer1) / integer2;
    cout<< result << endl; // 9.5
    result = static_cast<double>(integer1 / integer2);
    cout<< result << endl; // 9
    
}
