#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week56Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week560elements)
		{
			Solution sol = Solution();
			vector<int> pair = {};
			int actual = sol.smallestDistancePair(pair, 1);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(Week562elements)
		{
			Solution sol = Solution();
			vector<int> pair = {1,5};
			int actual = sol.smallestDistancePair(pair, 1);
			Assert::AreEqual(4, actual);
		}
		TEST_METHOD(Week563elementssorted1smallest)
		{
			Solution sol = Solution();
			vector<int> pair = { 1,2,3 };
			int actual = sol.smallestDistancePair(pair, 1);
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week563elementssorted2smallest)
		{
			Solution sol = Solution();
			vector<int> pair = { 1,2,3 };
			int actual = sol.smallestDistancePair(pair, 2);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(Week563elementssorted2smallestnegative)
		{
			Solution sol = Solution();
			vector<int> pair = { -1,-2,-3 };
			int actual = sol.smallestDistancePair(pair, 2);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(Week563failiedtest161)
		{
			Solution sol = Solution();
			vector<int> pair = { 1,6,1 };
			int actual = sol.smallestDistancePair(pair, 2);
			Assert::AreEqual(5, actual);
		}
	};
}