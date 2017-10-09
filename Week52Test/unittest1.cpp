#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week52Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		//TEST_METHOD(Week52Test)
		//{
		//	//[1, 2, 1, 2, 6, 7, 5, 1], 2
		//	vector<int> in = { 1, 2, 1, 2, 6, 7, 5, 1 };
		//	Solution sol = Solution();
		//	sol.maxSumOfThreeSubarrays(in, 2);
		//		// TODO: Your test code here
		//}
		TEST_METHOD(Week52FindLargestElement0) {
			Solution sol = Solution();
			vector<int> in = { 1,1 };
			vector<int> actual = sol.maxSumOfThreeSubarrays(in, 1);
			Assert::AreEqual(0, actual.at(0));
		}
		TEST_METHOD(Week52FindLargestElement1) {
			Solution sol = Solution();
			vector<int> in = { 1,2 };
			vector<int> actual = sol.maxSumOfThreeSubarrays(in, 1);
			Assert::AreEqual(1, actual.at(0));
		}
	};
}