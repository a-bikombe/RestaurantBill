/*
Student Name:  Arianna Bikombe
Date: February 4, 2021
Lab Assignment: Lab 01-Ch2Intro
Project Name: Lab01-01-RestaurantBill
Description: Calculates the tax and tip on a meal and displays results
Limitations or issues:	All the input is hard coded with no opportunity for the user to make changes.
Credits: Not Applicable
*/

#include <iostream>
using namespace std;

// #include <conio.h>

int main()
{
    // Print out your name and course
	cout << "Arianna Bikombe" << endl;
	cout << "CSCI175N\n" << endl;
	
	double mealCharge = 44.5;
	double tax = 0.0675;
	double tip = 0.15;
	double taxAmt, tipAmt, total;

	taxAmt = mealCharge * tax;		// tax calculation on total mealCharge
	tipAmt = (mealCharge + taxAmt) * tip;		// tip calculation on meal plus tax
	total = mealCharge + tipAmt + taxAmt;

	cout << "This program calculates a total meal charge." << endl << endl;

	// configure to print only two decimal places ****************************
	cout.setf(ios::fixed);			// Set cout to fixed point notation
	cout.setf(ios::showpoint);		// Set to display the decimal point
	cout.precision(2);			// Set to 2 places eg: ".xx"

	// add dollar sign to output display  ************************************
	cout << "Your meal charge is: $" << mealCharge << endl;
	cout << "Your tax amount  is: $ " << taxAmt << endl;
	cout << "Your tip amount  is: $ " << tipAmt << endl;
	cout << "Your total bill  is: $" << total << endl;

	// This code pauses the program so instructor can grade
	system("pause");

	return 0;
}

/*
Proof:

Arianna Bikombe
CSCI175N

This program calculates a total meal charge.

Your meal charge is: $44.50
Your tax amount  is: $ 3.00
Your tip amount  is: $ 7.13
Your total bill  is: $54.63
Press any key to continue . . .

*/