//
//  Question18.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

#include "Question18.hpp"

using namespace std;

void Question18()
{
    cout << "Question 18" << endl;
//    Question18A();
//    Question18B();
}

void Question18A()
{
    
    int size = 5;
    
    for (int i = 0; i < size; i++) {
        cout << setw(size-i) << "/";
        cout << setw(2*i + 1) << setfill(' ');
        cout << "\\" << endl;
    }
    
    cout << setw(size*2) << setfill('_') << "_" << endl;
    
    for (int i = 0; i < size/2 + 1; i++) {
        cout << setfill(' ') << setw(2) << right << "|" << setw(2*size - 4) << left << setfill(' ') << " " << "|" << endl;
    }
    
    cout << setfill(' ') << setw(2) << " " << setw(size*2 - 4) << setfill('_') << "_" << endl;
}

void Question18B()
{
    int size = 5;
    
    cout << setw(size*2) << setfill('_') << "_" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << setw(size-i) << "\\";
        cout << setw(2*i + 1) << setfill('#');
        cout << "/" << endl << setfill(' ');
    }
    
    for (int i = 0; i < size; i++) {
        cout << setw(size-i) << "/";
        cout << setw(2*i + 1) << setfill('#');
        cout << "\\" << endl << setfill(' ');
    }
    cout << setw(size*2) << setfill('-') << "-" << endl;
}
