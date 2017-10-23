#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace Week54Test
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Week54Drop00Square)
		{
			Solution sol = Solution();
			pair<int, int> square(0, 0);
			vector<pair<int, int>> squares = { square };
			vector<int> actual = sol.fallingSquares(squares);
			Assert::AreEqual(1, (int)actual.size());
			Assert::AreEqual(0, actual.at(0));
		}
		TEST_METHOD(Week54DropOneSquare) {
			Solution sol = Solution();
			pair<int, int> square(1, 1);
			vector<pair<int, int>> squares = { square };
			vector<int> actual = sol.fallingSquares(squares);
			Assert::AreEqual(1, (int)actual.size());
			Assert::AreEqual(1, actual.at(0));
		}
		//the test below are very trivial it's either a sum or a max
		//unless you try to figure out whether they are stacked or on a row
		//where I was wondering about intersections or overlap. you have a range
		TEST_METHOD(Week54DropStackofSquaresSameHeight) {
			Solution sol = Solution();
			pair<int, int> square0(0, 0);
			pair<int, int> square1(0, 1);
			pair<int, int> square2(0, 2);
			vector<pair<int, int>> squares = { square0,square1,square2 };
			vector<int> actual = sol.fallingSquares(squares);
			Assert::AreEqual(3, (int)actual.size());
			Assert::AreEqual(0, actual.at(0));
			Assert::AreEqual(0, actual.at(1));
			Assert::AreEqual(0, actual.at(2));
		}
		//interval tree
		//not sure whether this will solve everything
		//you can have discrete trees. The heights don't add
		//trees rooted at different points I think like a little forest.
		TEST_METHOD( Week54IntervalTreeNode){
			Solution sol = Solution();
			
			IntervalNode left = IntervalNode(0, 1, 0, 0);
			IntervalNode right = IntervalNode( 2,1,0,0 );
			IntervalNode root = IntervalNode(1, 0, 0, 0);
			IntervalTree tree = IntervalTree(root);
			IntervalTree tree2 = IntervalTree(5, 0);
			//IntervalNode node = tree.getRoot();
			//node. = 4
			//tree.getRoot().biggerChild = &right;
			//tree.smallerChild = &left;
			Assert::AreEqual(1, tree.getRoot().left);
			Assert::AreEqual(1, left.maxRight);
			Assert::AreEqual(5, tree2.getRoot().left);

			//Assert::AreEqual(0, tree.getRoot().smallerChild->left);
			//Assert::AreEqual(2, tree.getRoot().biggerChild->left);
		}
		//TEST_METHOD(Week54IntervalTreeNodeInsertLeftRightChild) {
		//	Tree tree =  Tree(1, 0);
		//	//intervalNode tree = { 1,0,0,0,0 };
		//	IntervalNode left = { 0,1,0,0,0 };
		//	tree.addNode(tree.getRoot(),left);
		//	IntervalNode right = { 2,1,0,0,0 };
		//	tree.addNode(tree.getRoot(),right);
		//	Assert::AreEqual(1, tree.getRoot().left);
		//	Assert::AreEqual(1, tree.getRoot().maxRight);
		//	Assert::AreEqual(0, tree.getRoot().smallerChild->left);
		//	Assert::AreEqual(2, tree.getRoot().biggerChild->left);
		//}
		//TEST_METHOD(Week54IntervalTreeNodeInsert2LeftChildren) {
		//	Tree tree = Tree(2, 0);
		//	//intervalNode tree = { 1,0,0,0,0 };
		//	IntervalNode left = { 1,1,0,0,0 };
		//	tree.addNode(tree.getRoot(),left);
		//	IntervalNode right = { 0,2,0,0,0 };
		//	tree.addNode(tree.getRoot(),right);
		//	Assert::AreEqual(2, tree.getRoot().left);
		//	Assert::AreEqual(2, tree.getRoot().maxRight);
		//	Assert::AreEqual(1, tree.getRoot().smallerChild->left);
		//	//Assert::AreEqual(0, tree.getRoot().biggerChild->left);//crash
		//}
		TEST_METHOD(Week54DropRowofSquaresSameHeight) {}
		TEST_METHOD(Week54DropRowofSquaresDifferentHeights) {}
	};
}