#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week59Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week59NoData)
		{
			Solution sol = Solution();
			vector<int> actual = sol.selfDividingNumbers(0, 0);
			Assert::AreEqual(0, (int)actual.size());
		}
		TEST_METHOD(Week59rightisbiggerthantheleft)
		{
			Solution sol = Solution();
			vector<int> actual = sol.selfDividingNumbers(11, 0);
			Assert::AreEqual(0, (int)actual.size());
		}
		TEST_METHOD(Week59singlenumber)
		{
			Solution sol = Solution();
			vector<int> actual = sol.selfDividingNumbers(1, 1);
			Assert::AreEqual(1, (int)actual.size());
			Assert::AreEqual(1, actual.at(0));
		}

		TEST_METHOD(Week59xto9)
		{
			Solution sol = Solution();
			vector<int> actual = sol.selfDividingNumbers(1, 9);
			Assert::AreEqual(9, (int)actual.size());
			Assert::AreEqual(1, actual.at(0));
			Assert::AreEqual(9, actual.at(8));
		}
		TEST_METHOD(Week591020devidebyzero)
		{
			Solution sol = Solution();
			vector<int> actual = sol.selfDividingNumbers(10, 10);
			Assert::AreEqual(0, (int)actual.size());
		}
	};
}