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

TEST(TestProblemSolved, itShouldReturnSmallestMultipleOfSpecifiedRange) {
	Algorithm obj = Algorithm();
	int rangeStart = 1;
	int rangeStop = 10;
	int correctAnswer = 2520;
	int result = obj.getSmallestMultipleOfRange(rangeStart, rangeStop);
	EXPECT_EQ(correctAnswer, result);
}

TEST(GetAnswerToProblem, itShouldReturnTheCorrectAnswer) {
	Algorithm obj = Algorithm();
	int rangeStart = 1;
	int rangeStop = 20;
	int correctAnswer = 232792560;
	int result = obj.getSmallestMultipleOfRange(rangeStart, rangeStop);
	EXPECT_EQ(correctAnswer, result);
}
