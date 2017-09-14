#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week49Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week49Length0)
		{
			Solution sol = Solution();
			//int input[];
			std::vector<int> nums;// (input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(Week49Length1)
		{
				Solution sol = Solution();
				int input = { 1 };
				std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
				int actual = sol.findNumberOfLIS(nums);
				Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week49Length2Increasing)
		{
			Solution sol = Solution();
			int input [] = { 1,2 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week49Length2Decreasing)
		{
			Solution sol = Solution();
			int input [] = { 1,0 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(Week49Length2Identical)
		{
			Solution sol = Solution();
			int input [] = { 1,1 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(Week49Length3Increasing)
		{
			Solution sol = Solution();
			int input[] = { 1,2,3 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week49Length3NotIncreasing)
		{
			Solution sol = Solution();
			int input[] = { 1,2,1 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(Week49LengthLeetExample1)
		{
			Solution sol = Solution();
			int input[] = { 1,3,5,4,7 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(Week49LengthLeetExample2)
		{
			Solution sol = Solution();
			int input[] = { 2,2,2,2,2 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(5, actual);
		}
		TEST_METHOD(Week49LengthWhatistheanswer)
		{
			Solution sol = Solution();
			int input[] = { 5,6,7,2,2 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(3, actual);
		}
		TEST_METHOD(Week49BreakonTestCase)
		{
			Solution sol = Solution();
			int input[] = { 1,2,4,3,5,4,7,2 };
			std::vector<int> nums(input, input + sizeof(input) / sizeof(int));
			int actual = sol.findNumberOfLIS(nums);
			Assert::AreEqual(3, actual);
		}
	};
}