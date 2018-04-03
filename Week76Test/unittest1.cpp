#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week76Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week76SingleElement)
		{
			Solution sol = Solution();
			vector<int> A = { 1 };
			vector<int> B = { 1 };
			int actual = sol.minSwap(A, B);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(Week76TwoElements1211)
		{
			Solution sol = Solution();
			vector<int> A = { 1,2 };
			vector<int> B = { 1,1 };
			int actual = sol.minSwap(A, B);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(Week76TwoElements1121)
		{
			Solution sol = Solution();
			vector<int> A = { 1,1 };
			vector<int> B = { 2,1 };
			int actual = sol.minSwap(A, B);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(Week76TwoElements1221)
		{
			Solution sol = Solution();
			vector<int> A = { 1,2 };
			vector<int> B = { 2,1 };
			int actual = sol.minSwap(A, B);
			Assert::AreEqual(1, actual);
		}
	};
}