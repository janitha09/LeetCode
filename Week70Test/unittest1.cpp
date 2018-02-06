#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//https://discuss.leetcode.com/topic/119482/my-1-line-c-solution - recognize a pattern
namespace Week70Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week70N1K1)
		{
			Solution sol = Solution();
			int actual = sol.kthGrammar(1, 1);
			Assert::AreEqual(0, actual);
		}

	};
}