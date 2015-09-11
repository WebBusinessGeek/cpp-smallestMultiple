/*
 * Algorithm.h
 *
 *  Created on: Sep 11, 2015
 *      Author: MacBookEr
 */

#ifndef INCLUDE_ALGORITHM_H_
#define INCLUDE_ALGORITHM_H_

#include <iostream>
#include <string>

using namespace std;

class Algorithm {

public:
	Algorithm();
	virtual ~Algorithm();

	string getTestAreWorking() const;


private:
	string testsAreWorking;
};

#endif /* INCLUDE_ALGORITHM_H_ */
