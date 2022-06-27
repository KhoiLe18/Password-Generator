//main.cpp
//Author: Khoi Le
//The main function of the password generator program
#include "inAndOut.h"
#include <iostream>

using namespace std;

int main() {
	unsigned long long length;
	bool uppercase, num, sym;

	askRequirements(length, uppercase, num, sym);
	printPass(length, uppercase, num, sym);

	return 0;
}
