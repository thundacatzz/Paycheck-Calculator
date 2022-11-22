#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// This program is for calculating an employee's standard paycheck deductions and finding their net pay.
// Written by Logan Skura, 9/1/2022

int main() 
{
	// These are our standard paycheck deductions
	float federal = 0.15;
	float state = 0.035;
	float ss = 0.0575;
	float med = 0.0275;
	float pension = 0.05;
	float health = 75;
		
	// These are our input variables
	float paycheck = 0;
	string employeeName = "";

	// These prompt the user for the employee's name and paycheck amount
	cout << "Enter employee's first and last name" << endl;
	getline(cin, employeeName);
	cout << "Enter paycheck amount" << endl;
	cin >> paycheck;
	
	// These output the paycheck deductions and the net amount, as well as format them into columns
	cout << "Paycheck calculation by Logan Skura" << endl << endl;
	cout << employeeName << endl;
	cout.setf(ios::fixed);
	cout << setprecision(2) << setfill('.');

	cout << left << setw(25) << "Gross Amount: " << '$' << paycheck << endl << endl;
	cout << left << setw(25) << "Federal Tax: " << '$' << paycheck * federal << endl;
	cout << left << setw(25) << "State Tax: " << '$' << paycheck * state << endl;
	cout << left << setw(25) << "Social Security Tax: " << '$' << paycheck * ss << endl;
	cout << left << setw(25) << "Medicare/Medicaid Tax: " << '$' << paycheck * med << endl;
	cout << left << setw(25) << "Pension Plan: " << '$' << paycheck * pension << endl;
	cout << left << setw(25) << "Health Insurance: " << '$' << health << endl << endl;
	cout << left << setw(25) << "Net Pay: " << '$' << paycheck - (paycheck * (federal + state + ss + med + pension)) - health;
	return 0;
}