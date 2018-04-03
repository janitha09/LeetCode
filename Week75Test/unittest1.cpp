#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week75Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week75SingleChar)
		{
			Solution sol = Solution();
			bool actual = sol.rotateString("A","A");
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week75reverseidentical)
		{
			Solution sol = Solution();
			bool actual = sol.rotateString("AA", "AA");
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week75reverse)
		{
			Solution sol = Solution();
			bool actual = sol.rotateString("AB", "BA");
			Assert::AreEqual(true, actual);
		}
	};
}