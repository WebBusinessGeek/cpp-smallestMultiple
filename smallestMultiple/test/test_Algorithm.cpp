/*
 * test_Algorithm.cpp
 *
 *  Created on: Sep 11, 2015
 *      Author: MacBookEr
 */
#include "gtest/gtest.h"
#include "Algorithm.h"


TEST(TestTestsAreWorking, itShouldReturnString) {
	Algorithm obj = Algorithm();
	EXPECT_EQ("Test are working!", obj.getTestAreWorking());
}
