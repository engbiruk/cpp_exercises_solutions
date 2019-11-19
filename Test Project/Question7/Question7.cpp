//
//  Question7.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
     Write statements using combined assignment operators to perform the following:
         i. Add 6 to x.
         ii. Subtract 4 from amount.
         iii. Multiply y by 4.
         iv. Divide total by 27.
         v. Store in x the remainder of x divided by 7.
         vi. Add y * 5 to x.
         vii. Subtract discount times 4 from total.
         viii. Multiply increase by salesRep times 5.
         ix. Divide profit by shares minus 1000
 
 */

#include "Question7.hpp"

using namespace std;

void Question7()
{
    cout << "Question 7" << endl;
    
    int x = 0, amount = 10, y = 5, total = 20, discount = 4, share = 4004, profit = 2000;
    float salesRep = 4.0, increase = 2.5;
    // i. Add 6 to x.
    x += 6;
    // ii. Subtract 4 from amount.
    amount -= 4;
    // iii. Multiply y by 4.
    y *= 4;
    // iv. Divide total by 27.
    total /= 27;
    // v. Store in x the remainder of x divided by 7.
    x %= 7;
    // vi. Add y * 5 to x.
    x += y * 5;
    // vii. Subtract discount times 4 from total.
    total -= discount * 4;
    // viii. Multiply increase by salesRep times 5.
    increase *= salesRep * 5;
    // ix. Divide profit by shares minus 1000
    profit /= share - 1000;
}
