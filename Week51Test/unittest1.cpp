#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week51Test
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Week51emptyinput)
		{
			//[[1, 2], [1, 3], [2, 3]]
			vector<vector<int>> v;
			Solution sol = Solution(0);
			vector<int> actual = sol.findRedundantConnection(v);
			Assert::AreEqual(0, (int)actual.size());
		}
		TEST_METHOD(Week51singleelement)
		{
			vector<vector<int>> v = { { 1, 2 } };
			Solution sol = Solution(0);
			vector<int> actual = sol.findRedundantConnection(v);
			Assert::AreEqual(0, (int)actual.size());
		}
		TEST_METHOD(Week51twoindenticalelements)
		{
			vector<vector<int>> v = { { 1, 2 },{ 1, 2 } };
			Solution sol = Solution(4);
			vector<int> actual = sol.findRedundantConnection(v);
			vector<int> expected = { 1,2 };
			Assert::AreEqual(1, actual.at(0));
			Assert::AreEqual(2, actual.at(1));
			Assert::AreEqual(0, sol.getConnectedComponents()[0]);
			Assert::AreEqual(1, sol.getConnectedComponents()[1]);
			Assert::AreEqual(1, sol.getConnectedComponents()[2]);
		}
		TEST_METHOD(Week51twoidentical2element)
		{
			vector<vector<int>> v = { { 1, 2 },{ 2, 1 } };
			Solution sol = Solution(4);
			vector<int> actual = sol.findRedundantConnection(v);
			Assert::AreEqual(2, actual.at(0));
			Assert::AreEqual(1, actual.at(1));
			Assert::AreEqual(0, sol.getConnectedComponents()[0]);
			Assert::AreEqual(1, sol.getConnectedComponents()[1]);
			Assert::AreEqual(1, sol.getConnectedComponents()[2]);
		}
		TEST_METHOD(Week51twodifferntelements)
		{
			vector<vector<int>> v = { { 1, 2 },{ 1, 3 } };
			Solution sol = Solution(4);
			vector<int> actual = sol.findRedundantConnection(v);
			Assert::AreEqual(0, (int)actual.size());
			Assert::AreEqual(0, sol.getConnectedComponents()[0]);
			Assert::AreEqual(1, sol.getConnectedComponents()[1]);
			Assert::AreEqual(1, sol.getConnectedComponents()[2]);
		}
		TEST_METHOD(Week51twodiffern2telements)
		{
			vector<vector<int>> v = { { 1, 2 },{ 3, 1 } };
			Solution sol = Solution(4);
			vector<int> actual = sol.findRedundantConnection(v);
			Assert::AreEqual(0, (int)actual.size());
			Assert::AreEqual(0, sol.getConnectedComponents()[0]);
			Assert::AreEqual(1, sol.getConnectedComponents()[1]);
			Assert::AreEqual(1, sol.getConnectedComponents()[2]);
		}
	};
}