//main.cpp
//Author: Khoi Le
//The main function of the password generator program
#include "passGenerator.h"
#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand(time(0));
	unsigned long long length;
	bool uppercase, num, sym;
	string choice;

	//Length of password
	cout << "Please input the length of your password: ";
	cin >> length;

	//Uppercase characters
	cout << "Does your password need uppercase characters? (y/n): ";
	cin >> choice;
	if (choice == "y" || choice == "Y" || choice == "YES" || choice == "yes" || choice == "Yes" || choice == "yEs" || choice == "yeS" || choice == "YEs" || choice == "yES" || choice == "YeS") {
		uppercase = true;
	}
	else if (choice == "n" || choice == "N" || choice == "NO" || choice == "no" || choice == "No" || choice == "nO") {
		uppercase = false;
	}
	else {
		cerr << "Not a valid choice" << endl;
		system("pause");
		return 1;
	}

	//Numbers
	cout << "Does your password need to include numbers? (y/n): ";
	cin >> choice;
	if (choice == "y" || choice == "Y" || choice == "YES" || choice == "yes" || choice == "Yes" || choice == "yEs" || choice == "yeS" || choice == "YEs" || choice == "yES" || choice == "YeS") {
		num = true;
	}
	else if (choice == "n" || choice == "N" || choice == "NO" || choice == "no" || choice == "No" || choice == "nO") {
		num = false;
	}
	else {
		cerr << "Not a valid choice" << endl;
		system("pause");
		return 1;
	}

	//Symbols
	cout << "Does your password need to include special symbols? (y/n): ";
	cin >> choice;
	if (choice == "y" || choice == "Y" || choice == "YES" || choice == "yes" || choice == "Yes" || choice == "yEs" || choice == "yeS" || choice == "YEs" || choice == "yES" || choice == "YeS") {
		sym = true;
	}
	else if (choice == "n" || choice == "N" || choice == "NO" || choice == "no" || choice == "No" || choice == "nO") {
		sym = false;
	}
	else {
		cerr << "Not a valid choice" << endl;
		system("pause");
		return 1;
	}

	//Length v requirements check
	if (uppercase && num && sym && length < 3) {
		cerr << "The length is too short for that amount of requirements" << endl;
		system("pause");
		return 1;
	}
	else if (uppercase && num && length < 2 || 
					 uppercase && sym && length < 2 ||
					 num && sym && length < 2) {
		cerr << "The length is too short for that amount of requirements" << endl;
		system("pause");
		return 1;
	}

	//Print password
	cout << "Your new passowrd is:" << endl 
			 << passwordGenerator(length, uppercase, num, sym) << endl;

	system("pause");
	return 0;
}
