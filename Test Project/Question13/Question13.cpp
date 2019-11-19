//
//  Question13.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
 
 13 A.
 Roman Numeral Converter
    Write a program that asks the user to enter a number with in the range of 1 through 10.
    Use a switch statement to display the Roman numeral version of that number.
        • InputValidation: Do not accept a number less than 1 or greater than 10
 
 13 B.
 Geometry Calculator
     1. Calculate the Area of a Circle
     2. Calculate the Area of a Rectangle
     3. Calculate the Area of a Triangle
     4. Quit
     Enter your choice (1-4):
 */

#include "Question13.hpp"

using namespace std;

void Question13()
{
    cout << "Question 13" << endl;
    
    Question13A();
    Question13B();
}


void Question13A()
{
    int number;
    
    do
    {
        cout << "Enter a number, with in the range of 1 - 10, to convert to Roman's: "; cin >> number;
        cout << ((number < 1 || number > 10) ? "\n!!! Please enter a valid number !!!!\n\n" : "") ;
    } while (number < 1 || number > 10);
    
    switch (number) {
        case 1:
            cout << number << " in Roman is : I";
            break;
        case 2:
            cout << number << " in Roman is : II";
            break;
        case 3:
            cout << number << " in Roman is : III";
            break;
        case 4:
            cout << number << " in Roman is : IV";
            break;
        case 5:
            cout << number << " in Roman is : V";
            break;
        case 6:
            cout << number << " in Roman is : VI";
            break;
        case 7:
            cout << number << " in Roman is : VII";
            break;
        case 8:
            cout << number << " in Roman is : VIII";
            break;
        case 9:
            cout << "Number in Roman is : IX";
            break;
        case 10:
            cout << "Number in Roman is : X";
            break;
            
        default:
            cout << "Error is Numbers!";
            break;
    }
    
    cout << endl;
}


void Question13B()
{
    short choice;
    float area;
    
    cout << "Geometry Calculator" << endl;
    cout << "\t 1. Calculate the Area of a Circle" << endl;
    cout << "\t 2. Calculate the Area of a Rectangle" << endl;
    cout << "\t 3. Calculate the Area of a Triangle" << endl;
    cout << "\t 4. Quit" << endl;
    
    menu_validation:
    cout << "\t Enter your choice (1-4): ";
    
    cin >> choice;
    
    switch (choice) {
        case 1:
            float radius;
            validation1:
            cout << "Enter the radius of the circle: "; cin >> radius;
            
            if (radius < 0) { // for validation
                cout << "\n\nYou entered invalid/negative values!\n\n";
                goto validation1;
            }
            
            area = PI * radius * radius;
            cout << "The Area of the circle is: " << area << endl;
            break;
        case 2:
            float length, width;
            validation2:
            cout << "Enter the length of the rectangle: "; cin >> length;
            cout << "Enter the width of the rectangle: "; cin >> width;
            
            if (length < 0 || width < 0) { // for validation
                cout << "\n\nYou entered invalid/negative values!\n\n";
                goto validation2;
            }
            
            area = length * width;
            cout << "The Area of the rectangle is: " << area << endl;
            break;
        case 3:
            float base, height;
            validation3:
            cout << "Enter the base of the triangle: "; cin >> base;
            cout << "Enter the height of the triangle: "; cin >> height;
            
            if (base < 0 || height < 0) { // for validation
                cout << "\n\nYou entered invalid/negative values!\n\n";
                goto validation3;
            }
            
            area = 0.5 * base * height;
            cout << "The Area of the circle is: " << area << endl;
            break;
        default:
            cout << "\n\nBad choice! use only 1 - 4 values!\n\n";
            goto menu_validation;
            break;
    }
    cout << endl;
}
