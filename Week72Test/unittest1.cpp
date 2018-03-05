#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week72Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week72SingleNumber)
		{
			Solution sol = Solution();
			vector<string> actual = sol.letterCasePermutation("1");
			Assert::AreEqual(1, (int)actual.size());
			//Assert::AreEqual("1", actual.);
		}
	};
}