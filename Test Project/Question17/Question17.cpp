//
//  Question17.cpp
//  Test Project
//
//  Created by Biruk Tilahun on 11/18/19.
//  Copyright © 2019 Biruk Tilahun. All rights reserved.
//

/*
    Random Number Guessing Game
      Write a program that generates a random number and asks the user to guess what the number is. If the
     user’s guess is higher than the random number, the program should display “Too high, try again.” If the
     user’s guess is lower than the random number, the program should display “Too low, try again.” The
     program should use a loop that repeats until the user correctly guesses the random number.
    Random Number Guessing Game Enhancement
      Enhance the program that you wrote for the above question so it keeps a count of the number of guesses
     that the user makes. When the user correctly guesses the random number, the program should display the
     number of guesses
 
 */
#include "Question17.hpp"

using namespace std;

void Question17()
{
    cout << "Question 17" << endl;
    Question17A();
    Question17B();
}

void Question17A()
{
    /* initialize random seed: */
    srand(int(std::time(NULL)));
    
    int theNumber = rand() % 100 + 1;
    
    int theGuess;
    
    do {
        cout << "Guess the number on my mind: "; cin >> theGuess;
        if(theGuess > theNumber) {
            cout << "Too high, try again!" << endl;
        } else if (theGuess < theNumber) {
            cout << "Too low, try again.”" << endl;
        } else { // win the game
            cout << endl << "Congratulations, You have correctly got the number!!!" << endl;
        }
    } while (theNumber != theGuess);
    
    
}

void Question17B()
{
    /* initialize random seed: */
    srand(int(std::time(NULL)));
    
    int theNumber = rand() % 100 + 1;
    
    int theGuess;
    int theNumberOfGuesses = 1;
    
    do {
        cout << "Guess the number on my mind: "; cin >> theGuess;
        if(theGuess > theNumber) {
            cout << "Too high, try again!" << endl;
            theNumberOfGuesses++;
        } else if (theGuess < theNumber) {
            cout << "Too low, try again.”" << endl;
            theNumberOfGuesses++;
        } else { // win the game
            cout << endl << "Congratulations, You have correctly got the number after " << theNumberOfGuesses << " guesses!" << endl;
        }
    } while (theNumber != theGuess);
    
    
}
