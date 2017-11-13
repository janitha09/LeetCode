#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week57Test
{
	TEST_CLASS(UnitTest1)
	{
	public:

		//TEST_METHOD(Week57NoCrushRow)
		//{
		//	Solution sol = Solution();
		//	vector<int> in = { 110,5,112,113,114 };
		//	vector<vector<int>> input = { { 110,5,112,113,114},{1,2,3,4,5},{6,7,8,9,10} };
		//	vector<vector<int>> actual = sol.candyCrush(input);
		//	//bool isEqual = equal(in.begin(), in.end(), actual);
		//	Assert::AreEqual(5, (int)actual.at(0).size());
		//}
		//TEST_METHOD(Week57CrushColumn)
		//{
		//	Solution sol = Solution();
		//	vector<vector<int>> input = { { 1,2,3 },{ 1,4,5 },{ 1,6,7 },{ 113,7,8 },{ 114,9,10 } }; //0,0 is top left
		//	vector<vector<int>> actual = sol.candyCrush(input);
		//	//bool isEqual = equal(in.begin(), in.end(), actual);
		//	Assert::AreEqual(3, (int)actual.at(0).size());
		//	Assert::AreEqual(0, actual.at(0).at(0));
		//	Assert::AreEqual(0, actual.at(1).at(0));
		//	Assert::AreEqual(0, actual.at(2).at(0));
		//	Assert::AreEqual(113, actual.at(3).at(0));
		//	Assert::AreEqual(114, actual.at(4).at(0));
		//}
		//TEST_METHOD(Week57CrushRow3)
		//{
		//	Solution sol = Solution();
		//	vector<vector<int>> input = { { 1,1,1 },{ 2,4,5 },{ 8,6,7 } };
		//	vector<vector<int>> actual = sol.candyCrush(input);
		//	//bool isEqual = equal(in.begin(), in.end(), actual);
		//	Assert::AreEqual(5, (int)actual.at(0).size());
		//	Assert::AreEqual(0, actual.at(0).at(0));
		//	Assert::AreEqual(0, actual.at(0).at(1));
		//	Assert::AreEqual(0, actual.at(0).at(2));
		//	Assert::AreEqual(5, actual.at(1).at(2));
		//	Assert::AreEqual(6, actual.at(0).at(1));
		//}
		//TEST_METHOD(Week57CrushRow3ormore)
		//{
		//	Solution sol = Solution();
		//	vector<vector<int>> input = { {1,1,1,1,1} };
		//	vector<vector<int>> actual = sol.candyCrush(input);
		//	//bool isEqual = equal(in.begin(), in.end(), actual);
		//	Assert::AreEqual(5, (int)actual.at(0).size());
		//	Assert::AreEqual(0, actual.at(0).at(0));
		//	Assert::AreEqual(0, actual.at(0).at(1));
		//	Assert::AreEqual(0, actual.at(0).at(2));
		//	Assert::AreEqual(0, actual.at(0).at(3));
		//	Assert::AreEqual(0, actual.at(0).at(4));
		//}
		TEST_METHOD(Week57TrivialCrush2elementRow) {
			Solution sol = Solution();
			vector<vector<int>> in = { {1,1} };
			vector<vector<int>> actual = sol.candyCrush(in);
			Assert::AreEqual(2, (int)actual.at(0).size());
				Assert::AreEqual(0, actual.at(0).at(0));
				Assert::AreEqual(0, actual.at(0).at(1));
			//	Assert::AreEqual(0, actual.at(0).at(2));
		}
		TEST_METHOD(Week57TrivialCrush3elementRow) {
			Solution sol = Solution();
			vector<vector<int>> in = { { 1,1,1 } };
			vector<vector<int>> actual = sol.candyCrush(in);
			Assert::AreEqual(3, (int)actual.at(0).size());
				Assert::AreEqual(0, actual.at(0).at(0));
				Assert::AreEqual(0, actual.at(0).at(1));
				Assert::AreEqual(0, actual.at(0).at(2));
		}
		TEST_METHOD(Week57TrivialCrush3element2Row) {
			Solution sol = Solution();
			vector<vector<int>> in = { { 2,1,1 } };
			vector<vector<int>> actual = sol.candyCrush(in);
			Assert::AreEqual(3, (int)actual.at(0).size());
			Assert::AreEqual(2, actual.at(0).at(0));
			Assert::AreEqual(0, actual.at(0).at(1));
			Assert::AreEqual(0, actual.at(0).at(2));
		}
		//TEST_METHOD(Week57TrivialNoCrush3elementRow) {
		//	Solution sol = Solution();
		//	vector<vector<int>> in = { { 2,1,2 } };
		//	vector<vector<int>> actual = sol.candyCrush(in);
		//	Assert::AreEqual(3, (int)actual.at(0).size());
		//	Assert::AreEqual(2, actual.at(0).at(0));
		//	Assert::AreEqual(0, actual.at(0).at(1));
		//	Assert::AreEqual(0, actual.at(0).at(2));
		//}
	};
}