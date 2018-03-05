#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week71Test
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Week71RootOnly)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			int actual = sol.minDiffInBST(&tr);
			Assert::AreEqual(2147483647, actual);
		}
		TEST_METHOD(Week71RootLeft)
		{
			Solution sol = Solution();
			TreeNode left = { 0 };
			TreeNode tr = { 1 };
			tr.left = &left;
			int actual = sol.minDiffInBST(&tr);
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week71RootLeftLeft)
		{
			Solution sol = Solution();
			TreeNode left2 = { 2 };
			TreeNode left1 = { 5 };
			TreeNode tr = { 10 };
			left1.left = &left2;
			tr.left = &left1;
			int actual = sol.minDiffInBST(&tr);
			Assert::AreEqual(3, actual);
		}
		TEST_METHOD(Week71RootLeftRight)
		{
			Solution sol = Solution();
			TreeNode left = { -2 };
			TreeNode right = { 10 };
			TreeNode tr = { 5 };
			tr.right = &right;
			tr.left = &left;
			int actual = sol.minDiffInBST(&tr);
			Assert::AreEqual(5, actual);
		}
	};
}