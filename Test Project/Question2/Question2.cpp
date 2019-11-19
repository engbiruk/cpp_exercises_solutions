//
//  Question2.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 I.Convert the following pseudocodeto C++ code. Be sure to define the appropriate variables
     Store 20 in the speed variable.
     Store 10 in the time variable.
     Multiply speed by time and store the result in the distance variable.
     Display the contents of the distance variable.
 II.Convert the following pseudocodeto C++ code. Be sure to define the appropriate variables
     Store 172.5 in the force variable.
     Store 27.5 in the area variable.
     Divide area by force and store the result in the pressure variable.
     Display the contents of the pressure variable.
 */

#include "Question2.hpp"


using namespace std;

void Question2() {
    cout << "Question 2" << endl;
    Question2I();
    Question2II();
}

void Question2I()
{
    // Store 20 in the speed variable.
    short int speed = 20;
    // Store 10 in the time variable.
    short int time = 10;
    // Multiply speed by time and store the result in the distance variable.
    short int distance = speed * time;
    // Display the contents of the distance variable.
    cout << "Distance: " << distance << endl;
}

void Question2II()
{
    // Store 172.5 in the force variable.
    float force = 172.5;
    // Store 27.5 in the area variable.
    float area = 27.5;
    // Divide force by area and store the result in the pressure variable.
    float pressure = force / area;
    // Display the contents of the pressure variable.
    cout << "Pressure: " << pressure << endl;
    
}
