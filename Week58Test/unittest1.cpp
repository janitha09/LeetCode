#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week58Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week58SingleElementNoStoichiometry)
		{
			Solution sol = Solution();
			string input = "O";
			string actual = sol.countOfAtoms(input);
			Assert::AreEqual(input, actual);
		}
		TEST_METHOD(Week58TwoElementWrongOrder)
		{
			Solution sol = Solution();
			string input = "OH";
			string actual = sol.countOfAtoms(input);
			Assert::AreEqual(string("HO"), actual);
		}
		TEST_METHOD(Week58TwoElementsWrongStoichiometryOrder)
		{
			Solution sol = Solution();
			string input = "2O";
			string actual = sol.countOfAtoms(input);
			Assert::AreEqual(string(""), actual);
		}
		TEST_METHOD(Week58TwoElementWrongOrder2LetterElements)
		{
			Solution sol = Solution();
			string input = "OMg";
			string actual = sol.countOfAtoms(input);
			Assert::AreEqual(string("MgO"), actual);
		}
	};
}