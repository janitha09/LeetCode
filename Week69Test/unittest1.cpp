#include "stdafx.h"
#include "CppUnitTest.h"
#include <algorithm>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week69Test
	//http ://mathworld.wolfram.com/PermutationInversion.html
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week69AscOrderAdjacent)
		{
			Solution sol = Solution();
			vector<int> A = { 0,1 };
			bool actual = sol.isIdealPermutation(A);
			Assert::AreEqual(true,actual);
		}
		TEST_METHOD(Week69DescOrderAdjacent)
		{
			Solution sol = Solution();
			vector<int> A = { 1,0 };
			bool actual = sol.isIdealPermutation(A);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week693elements1)
		{
			Solution sol = Solution();
			vector<int> A = { 0,1,2 };
			bool actual = sol.isIdealPermutation(A);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week69PrintPermutations) {
			char buffer[200];
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					for (int k = 0; k < 3; ++k) {
						sprintf_s(buffer, "{%d,%d,%d}\n", i, j, k);
						Logger::WriteMessage(buffer);
					}
				}
			}
			char xs[] = "012";
			do
			{
				sprintf_s(buffer, "{%s}\n", xs);
				Logger::WriteMessage(buffer);
			} while (std::next_permutation(xs, xs + sizeof(xs) - 1));
			//return 0;
		}
		//TEST_METHOD(Week69AscOrderNotAdjacent2) //this should be false because the N-1 condition has been violated
		//{
		//	Solution sol = Solution();
		//	vector<int> A = { 0,2 }; //this is not a valid input
		//	bool actual = sol.isIdealPermutation(A);
		//	Assert::AreEqual(true, actual);
		//}
		//TEST_METHOD(Week69AscOrderNotAdjacent3)
		//{
		//	Solution sol = Solution();
		//	vector<int> A = { 0,3 }; //this is not a valid input
		//	bool actual = sol.isIdealPermutation(A);
		//	Assert::AreEqual(true, actual);
		//}
		//TEST_METHOD(Week69DescOrderNotAdjacent)
		//{
		//	Solution sol = Solution();
		//	vector<int> A = { 2,0 }; //this is not a valid input
		//	bool actual = sol.isIdealPermutation(A);
		//	Assert::AreEqual(true, actual);
		//}

	};
}