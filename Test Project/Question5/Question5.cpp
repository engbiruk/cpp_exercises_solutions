//
//  Question5.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 Volume of a Cylinder
        Complete the following program skeleton so it displays the volume of a cylindrical fuel tank.
        The formula for the volume of a cylinder is
     Volume: π*r*r*h
         • π is 3.14159
         • r is the radius of the tank
         • h is the height of the tank
 
 */
#include "Question5.hpp"

using namespace std;

void Question5()
{
    cout << "Question 5" << endl;
    
    double volume, radius, height;
    cout << "This program will tell you the volume of a cylinder-shaped fuel tank.\n";
    
    cout << "How tall is the tank? ";
    cin  >> height;
    
    cout << "What is the radius of the tank? ";
    cin  >> radius;
    
    // compute the rest
    // NOTE: PI is declared as constant variable in the Question5.hpp file
    volume = PI * radius * radius * height;
    
    cout << "Volume of the cylinder is: " << volume << endl;
    
}
