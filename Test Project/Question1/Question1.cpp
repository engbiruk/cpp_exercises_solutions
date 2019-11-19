//
//  Question1.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 Write assignment statements that perform the following operations with the variables a, b, and c.
 i.Adds 2 to a and stores the result in b.
 ii.Multiplies b times 4 and stores the result in a.
 iii.Divides a by 3.14 and stores the result in b.
 iv.Subtracts 8 from b and stores the result in a.
 v.Stores the value 27 in a.
 vi.Stores the character ‘K’ in c.
 vii.Stores the ASCII code for ‘B’ in c
 */

#include "Question1.hpp"


using namespace std;

void Question1()
{
    cout << "Question 1" << endl;
    
    int a = 0, b;
    char c;
    
    //    i.Adds 2 to a and stores the result in b.
    b = a + 2;
    //    ii.Multiplies b times 4 and stores the result in a.
    a = b * 4;
    //    iii.Divides a by 3.14 and stores the result in b.
    b = a / 3.14;
    //    iv.Subtracts 8 from b and stores the result in a.
    a = b - 8;
    //    v.Stores the value 27 in a.
    a = 27;
    //    vi.Stores the character ‘K’ in c.
    c = 'K';
    //    vii.Stores the ASCII code for ‘B’ in c -> 66
    c = 66;
    
}
