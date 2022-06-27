//inAndOut.cpp
//Author: Khoi Le
//Provides IO operations for the main function
#include "inAndOut.h"
#include "passGenerator.h"
#include <iostream>
#include <string>

using namespace std;

void setLength(unsigned long long len) {
	unsigned long long length;
	cin >> length;
	len = length;
}

void setUp(bool up) {
	string choice;
	cin >> choice;
	if (choice == "y" || choice == "Y" || choice == "YES" || choice == "yes" || choice == "Yes" || choice == "yEs" || choice == "yeS" || choice == "YEs" || choice == "yES" || choice == "YeS") {
		up = true;
	}

	else if (choice == "n" || choice == "N" || choice == "NO" || choice == "no" || choice == "No" || choice == "nO") {
		up = false;
	}

	else {
		cerr << "Not a valid choice" << endl;
		setUp(up);
	}
}

void setNum(bool num) {
	string choice;
	cin >> choice;
	if (choice == "y" || choice == "Y" || choice == "YES" || choice == "yes" || choice == "Yes" || choice == "yEs" || choice == "yeS" || choice == "YEs" || choice == "yES" || choice == "YeS") {
		num = true;
	}

	else if (choice == "n" || choice == "N" || choice == "NO" || choice == "no" || choice == "No" || choice == "nO") {
		num = false;
	}

	else {
		cerr << "Not a valid choice" << endl;
		setNum(num);
	}
}

void setSym(bool sym) {
	string choice;
	cin >> choice;
	if (choice == "y" || choice == "Y" || choice == "YES" || choice == "yes" || choice == "Yes" || choice == "yEs" || choice == "yeS" || choice == "YEs" || choice == "yES" || choice == "YeS") {
		sym = true;
	}

	else if (choice == "n" || choice == "N" || choice == "NO" || choice == "no" || choice == "No" || choice == "nO") {
		sym = false;
	}

	else {
		cerr << "Not a valid choice" << endl;
		setSym(sym);
	}
}

void askRequirements(unsigned long long len, bool up, bool num, bool sym) {
	cout << "Please input the length of your password: ";
	setLength(len);

	cout << "Does your password need uppercase characters? (y/n): ";
	setUp(up);

	cout << "Does your password need to include numbers? (y/n): ";
	setNum(num);

	cout << "Does your password need to include special symbols? (y/n): ";
	setSym(sym);
}

void printPass(unsigned long long len, bool up, bool num, bool sym) {
	cout << "Your new passowrd is:" << endl 
			 << passwordGenerator(len, up, num, sym) << endl;
}