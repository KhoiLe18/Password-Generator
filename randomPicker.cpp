//randomPicker.h
//Author: Khoi Le
//Generates random characters based on the ASCII table
#include "randomPicker.h"
#include <iostream>

char randomLower() {
	return static_cast<char>(rand() % 26 + 97);
}

char randomUpper() {
	return static_cast<char>(rand() % 26 + 65);
}

char randomNumber() {
	return static_cast<char>(rand() % 10 + 48);
}

char randomSymbol1() {
	return static_cast<char>(rand() % 15 + 33);
}

char randomSymbol2() {
	return static_cast<char>(rand() % 7 + 58);
}

char randomSymbol3() {
	return static_cast<char>(rand() % 6 + 91);
}

char randomSymbol4() {
	return static_cast<char>(rand() % 4 + 123);
}

char randomSymbol() {
	char symASCII[5] {randomSymbol1(), randomSymbol1(), randomSymbol2(), randomSymbol3(), randomSymbol4()};
	return symASCII[rand() % 5];
}
