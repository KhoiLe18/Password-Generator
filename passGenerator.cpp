//passGenerator.cpp
//Author: Khoi Le
//Generates a new password based on the user's requirements
#include "passGenerator.h"
#include "randomPicker.h"
#include <iostream>
#include <string>
#include <time.h>

std::string passwordGenerator(unsigned long long len, bool up, bool num, bool sym) {
	std::string tempChars(0);
	std::string password;
	password.resize(len);

	for (int i = 0; i < password.length(); i++) {
		srand(time(0));
		tempChars.push_back(randomLower());
		if (up)
			tempChars.push_back(randomUpper());
		if (num)
			tempChars.push_back(randomNumber());
		if (sym)
			tempChars.push_back(randomSymbol());

		password[i] = tempChars[rand() % tempChars.length()];
	}

	return password;
}