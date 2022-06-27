//passGenerator.h
//Author: Khoi Le
//Generates a new password based on the user's requirements
#pragma once

#include <string>
#include "randomPicker.h"

std::string passwordGenerator(unsigned long long len, bool up, bool num, bool sym);