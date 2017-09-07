#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week48Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week48SingleInt)
		{
			Solution sol = Solution();
			int actual = sol.maximumSwap(0);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(Week48SingleIdenticalInt)
		{
			Solution sol = Solution();
			int actual = sol.maximumSwap(111);
			Assert::AreEqual(111, actual);
		}
		TEST_METHOD(Week48Sorted2IntAscending)
		{
			//01 is not legal it's an int 0 is ignored	
			Solution sol = Solution();
			int actual = sol.maximumSwap(12);
			Assert::AreEqual(21, actual);
		}
		TEST_METHOD(Week48Sorted2IntDescending)
		{
			Solution sol = Solution();
			int actual = sol.maximumSwap(10);
			Assert::AreEqual(10, actual);
		}
		TEST_METHOD(Week48Sorted3IntDescending) //can go to n
		{
			Solution sol = Solution();
			int actual = sol.maximumSwap(210);
			Assert::AreEqual(210, actual);
		}
		TEST_METHOD(Week48Sorted3IntAscending) //can go to n
		{
			Solution sol = Solution();
			int actual = sol.maximumSwap(123);
			Assert::AreEqual(321, actual);
		}
	};
}