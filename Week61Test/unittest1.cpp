#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week61Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week61OneDay)
		{
			Solution sol = Solution();
			vector<int> temps = { 30 };
			vector<int> actuals = sol.dailyTemperatures(temps);
			Assert::AreEqual(0,actuals.at(0));
		}

		TEST_METHOD(Week61TwoDaysSameTemp)
		{
			Solution sol = Solution();
			vector<int> temps = { 30,30 };
			vector<int> actuals = sol.dailyTemperatures(temps);
			Assert::AreEqual(0, actuals.at(0));
			Assert::AreEqual(0, actuals.at(1));
		}

		TEST_METHOD(Week61TwoDaysDecreasingTemp)
		{
			Solution sol = Solution();
			vector<int> temps = { 60,50 };
			vector<int> actuals = sol.dailyTemperatures(temps);
			Assert::AreEqual(0, actuals.at(0));
			Assert::AreEqual(0, actuals.at(0));
		}

		TEST_METHOD(Week61ThreeDaysIncreasingTemps1)
		{
			Solution sol = Solution();
			vector<int> temps = { 30,31,32 };
			vector<int> actuals = sol.dailyTemperatures(temps);
			Assert::AreEqual(2, actuals.at(0));
			Assert::AreEqual(1, actuals.at(1));
			Assert::AreEqual(0, actuals.at(2));
		}

	};
}