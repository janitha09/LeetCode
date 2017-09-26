#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week50Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week50emptystring)
		{
			Solution sol = Solution();
			std::string str;
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week50notabracket)
		{
			Solution sol = Solution();
			std::string str = "a";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week50asinglebracket)
		{
			Solution sol = Solution();
			std::string str = "(";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week50matchingbracket)
		{
			Solution sol = Solution();
			std::string str = "()";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week50bracketedstring)
		{
			Solution sol = Solution();
			std::string str = "(4)";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week50bracketedstringmismatchrandstart)
		{
			Solution sol = Solution();
			std::string str = "a(4)";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week50bracketedstringmismatch)
		{
			Solution sol = Solution();
			std::string str = "((4)";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week50bracketedstringmatchasterisk)
		{
			Solution sol = Solution();
			std::string str = "((4)*";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week50bracketmatchasterisk)
		{
			Solution sol = Solution();
			std::string str = "(*)";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week50bracketmatchreverse)
		{
			Solution sol = Solution();
			std::string str = ")(";
			bool actual = sol.checkValidString(str);
			Assert::AreEqual(false, actual);
		}
	};
}