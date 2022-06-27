//inAndOut.h
//Author: Khoi Le
//Provides IO operations for the main function
#pragma once

#include "passGenerator.h"
#include <iostream>

void setLength(long long len);
void setUp(bool up);
void setNum(bool num);
void setSym(bool sym);
void askRequirements(long long len, bool up, bool num, bool sym);
void printPass(long long len, bool up, bool num, bool sym);