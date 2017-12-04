#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week60Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week60NoOperator)
		{
			Solution sol = Solution();
			int actual = sol.evaluate("1");
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week60Add10)
		{
			Solution sol = Solution();
			int actual = sol.evaluate("add 1 0");
			Assert::AreEqual(1, actual);
		}

	};
}