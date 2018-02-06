#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week68Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week68SingleRow)
		{
			Solution sol = Solution();
			std::vector<std::vector<int>> matrix = { {1,2} };
			bool actual = sol.isToeplitzMatrix(matrix);
			Assert::AreEqual(false, actual);
		}

		TEST_METHOD(Week68twoxtwosquare)
		{
			Solution sol = Solution();
			std::vector<std::vector<int>> matrix = { { 1,2 },{ 3,1 } };
			bool actual = sol.isToeplitzMatrix(matrix);
			Assert::AreEqual(true, actual);
		}

		TEST_METHOD(Week68twoxtwosquareneg)
		{
			Solution sol = Solution();
			std::vector<std::vector<int>> matrix = { { 2,1 },{ 3,1 } };
			bool actual = sol.isToeplitzMatrix(matrix);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week68threextwosquareneg)
		{
			Solution sol = Solution();
			std::vector<std::vector<int>> matrix = { { 1,2 },{ 3,1 },{4,3} };
			bool actual = sol.isToeplitzMatrix(matrix);
			Assert::AreEqual(true, actual);
		}

	};
}