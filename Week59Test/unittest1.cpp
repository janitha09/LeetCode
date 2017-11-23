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
	};
}