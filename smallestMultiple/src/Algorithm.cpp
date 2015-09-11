/*
 * Algorithm.cpp
 *
 *  Created on: Sep 11, 2015
 *      Author: MacBookEr
 */

#include "Algorithm.h"

Algorithm::Algorithm() {
	// TODO Auto-generated constructor stub

}

Algorithm::~Algorithm() {
	// TODO Auto-generated destructor stub
}

string Algorithm::getTestAreWorking() const {
	return "Test are working!";
}

int Algorithm::getSmallestMultipleOfRange(int rangeStart, int rangeStop) const {
	int floor = rangeStart;
	int numToCheck = 1;

	while(rangeStart != rangeStop) {
		if(numToCheck % rangeStart == 0) {
			rangeStart++;
		}
		else {
			rangeStart = floor;
			numToCheck++;
		}
	}
	return numToCheck;
}




