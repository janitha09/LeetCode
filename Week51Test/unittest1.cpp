#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>

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
			Assert::AreEqual(1, sol.getConnectedComponents()[3]);
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
			Assert::AreEqual(1, sol.getConnectedComponents()[3]);
		}
		TEST_METHOD(Week51threeelements)
		{
			vector<vector<int>> v = { { 1, 2 },{ 3, 1 },{ 2, 3 } };
			//[[1, 3], [3, 4], [1, 5], [3, 5], [2, 3]]
			Solution sol = Solution(4);
			vector<int> actual = sol.findRedundantConnection(v);
			Assert::AreEqual(2, actual.at(0));
			Assert::AreEqual(3, actual.at(1));
			Assert::AreEqual(0, sol.getConnectedComponents()[0]);
			Assert::AreEqual(1, sol.getConnectedComponents()[1]);
			Assert::AreEqual(1, sol.getConnectedComponents()[2]);
			Assert::AreEqual(1, sol.getConnectedComponents()[3]);
		}
		TEST_METHOD(Week51sixElements)
		{
			vector<vector<int>> v = { { 1, 3 },{ 3, 4 },{ 1, 5 },{ 3, 5 },{ 2, 3 } };
			Solution sol = Solution(6);
			vector<int> actual = sol.findRedundantConnection(v);
			//for (int i = 0; i < 6; ++i) {
			//	wchar_t m_reportFileName[256];
			//	swprintf_s(m_reportFileName, L"%d", sol.getConnectedComponents()[i]);
			//	
			//	Logger::WriteMessage(m_reportFileName);
			//}
			Assert::AreEqual(3, actual.at(0));
			Assert::AreEqual(5, actual.at(1));

			Assert::AreEqual(0, sol.getConnectedComponents()[0]);
			Assert::AreEqual(1, sol.getConnectedComponents()[1]);
			Assert::AreEqual(0, sol.getConnectedComponents()[2]);
			Assert::AreEqual(1, sol.getConnectedComponents()[3]);
			Assert::AreEqual(1, sol.getConnectedComponents()[4]);
			Assert::AreEqual(1, sol.getConnectedComponents()[5]);
			
		}
	};
}