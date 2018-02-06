#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week67Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		//https ://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer
		TEST_METHOD(Week67Zero)
		{
			Solution sol = Solution();
			int actual = sol.countPrimeSetBits(0, 0);
			Assert::AreEqual(0, actual);
		}

	};
}