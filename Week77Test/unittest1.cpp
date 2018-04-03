#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week77Test
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Week77SingleBuilding)
		{
			Solution sol = Solution();
			vector<vector<int>> input = { {1} };
			int actual = sol.maxIncreaseKeepingSkyline(input);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(Week77SingleRow)
		{
			Solution sol = Solution();
			vector<vector<int>> input = { { 1,3 } };
			int actual = sol.maxIncreaseKeepingSkyline(input);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(Week77SingleCol)
		{
			Solution sol = Solution();
			vector<vector<int>> input = { {1},{4} };
			int actual = sol.maxIncreaseKeepingSkyline(input);
			Assert::AreEqual(3, actual);
		}
		TEST_METHOD(Week772x2)
		{
			Solution sol = Solution();
			vector<vector<int>> input = { { 1,3 },{2, 4 } };
			int actual = sol.maxIncreaseKeepingSkyline(input);
			Assert::AreEqual(1, actual);
			// { 2,3 },{2, 4 }
		}


	};
}