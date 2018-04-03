#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week78Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week78NoElements)
		{
			Solution sol = Solution();
			vector<int> nums = {  };
			bool actual = sol.xorGame(nums);
			Assert::AreEqual(false, actual);
		}

		TEST_METHOD(Week78Single)
		{
			Solution sol = Solution();
			vector<int> nums = { 1 };
			bool actual = sol.xorGame(nums);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week78TwoIdentical)
		{
			Solution sol = Solution();
			vector<int> nums = { 1,1 };
			bool actual = sol.xorGame(nums);
			Assert::AreEqual(true, actual);
		}
	};
}