#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//https://math.stackexchange.com/questions/286947/number-of-zero-digits-in-factorials
//http://www.mytechinterviews.com/how-many-trailing-zeros-in-100-factorial
namespace Week74Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week74factorialswithnozeroes)
		{
			Solution sol = Solution();
			int actual = sol.preimageSizeFZF(0);
			Assert::AreEqual(actual, 5);
		}
		TEST_METHOD(Week74factorialswithonezeroes)
		{
			Solution sol = Solution();
			int actual = sol.preimageSizeFZF(1);
			Assert::AreEqual(actual, 5);
		}
	};
}