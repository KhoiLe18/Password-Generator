//passGenerator.cpp
//Author: Khoi Le
//Generates a new password based on the user's requirements
#include "passGenerator.h"
#include "randomPicker.h"
#include <iostream>
#include <string>

std::string passwordGenerator(unsigned long long len, bool up, bool num, bool sym) {
	std::string tempChars;
	std::string password;
	password.resize(len);

	for (int i = 0; i < password.length(); i++) {
		char temp;
		temp = randomLower();
		tempChars.push_back(temp);
		
		if (up) {
			temp = randomUpper();
			tempChars.push_back(temp);
		}

		if (num) {
			temp = randomNumber();
			tempChars.push_back(temp);
		}

		if (sym) {
			temp = randomSymbol();
			tempChars.push_back(temp);
		}
		
		password[i] = tempChars[rand() % tempChars.length()];
	}

	return password;
}
