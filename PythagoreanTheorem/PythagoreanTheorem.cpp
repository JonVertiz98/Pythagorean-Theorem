// Jonathan Vertiz
// ITSE 1307
// Pythagorean Theorem
// Pythagorean Theorem.cpp : Solves the equation given and accounts for 4 decimal places.

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	//Initialize the values we'll need
	double dblAlpha = 0.0;
	double dblBravo = 0.0;
	double dblCharlie = 0.0;

	//Prompts the user to enter in their integers followed by the code that'll solve the equation
	cout << "Please enter your first integer: ";
	cin >> dblAlpha;
	cout << "Please enter your second integer: ";
	cin >> dblBravo;
	dblCharlie = sqrt(pow(dblAlpha, 2) + pow(dblBravo, 2));

	//Precision is sent to 4 so up to 4 decimal places will be accounted for, the output of the equation is also given
	cout << setprecision(4);
	cout << "A^2 + B^2 + C^2: " << dblAlpha
		<< " + " << dblBravo << " = "
		<< dblCharlie << endl;
    return 0;
}

