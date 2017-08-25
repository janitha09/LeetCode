#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week46Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		/**
		* null
		*/
		TEST_METHOD(emptytree)
		{
			Solution sol = Solution();
			TreeNode *tr = NULL;
			int actual = sol.widthOfBinaryTree(tr);
			Assert::AreEqual(0, actual);
		}
		/**
		*	0
		*  /
		* 0
		*/
		TEST_METHOD(SingleLeftNodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l1 = { 0 };
			tr.left = &l1;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(1, actual);
		}
		/**
		*	0
		*	 \
		*	  0
		*/
		TEST_METHOD(SingleRightNodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode r1 = { 0 };
			tr.right = &r1;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(1, actual);
		}
		/**
		*	0
		*``/ \
		* 0   0
		*/
		TEST_METHOD(SingleLevelLeftRightNodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode r1 = { 0 };
			TreeNode l1 = { 0 };
			tr.right = &r1;
			tr.left = &l1;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(2, actual);
		}
        /**
              0
             /
            0
           /
          0 
        */
        TEST_METHOD(L11L21NodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l1 = { 0 };
			TreeNode l2 = { 0 };
			tr.left = &l1;
			l1.left = &l2;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(1, actual);
		}
		/**
			 0
			/
		   0  
		  / \ 
		 0   0
		*/
		TEST_METHOD(L1lL212NodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l11 = { 0 };
			TreeNode l21 = { 0 };
			TreeNode l22 = { 0 };
			tr.left = &l11;
			l11.left = &l21;
			l11.right = &l22;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(2, actual);
		}
		/**
			0
		   / \
		  0   0
		 / 
		0   
		*/
		TEST_METHOD(L1lL12L21NodeTreee)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l11 = { 0 };
			TreeNode l21 = { 0 };
			TreeNode l12 = { 0 };
			tr.left = &l11;
			tr.right = &l12;
			l11.left = &l21;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(2, actual);
		}
		/**
			0
		   / \
		  0   0
		 / \
		0   0
		*/
		TEST_METHOD(L1lL12L21L22NodeTreee)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l11 = { 0 };
			TreeNode l21 = { 0 };
			TreeNode l22 = { 0 };
			TreeNode l12 = { 0 };
			tr.left = &l11;
			tr.right = &l12;
			l11.left = &l21;
			l11.right = &l22;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(2, actual);
		}
		/**
			0
		   / \
		  0   0
		   \
		    0
		*/
		TEST_METHOD(L1lL12L22NodeTreee)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l11 = { 0 };
			TreeNode l21 = { 0 };
			TreeNode l22 = { 0 };
			TreeNode l12 = { 0 };
			tr.left = &l11;
			tr.right = &l12;
			//l11.left = &l21;
			l11.right = &l22;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(2, actual);
		}

		/**
			0
		   /  \
		  0    0
		 / \  /
		0   00
		*/
		TEST_METHOD(L1lL12L21L22L23NodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l11 = { 0 };
			TreeNode l21 = { 0 };
			TreeNode l22 = { 0 };
			TreeNode l23 = { 0 };
			TreeNode l12 = { 0 };
			tr.left = &l11;
			tr.right = &l12;
			l11.left = &l21;
			l11.right = &l22;
			l12.left = &l23;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(3, actual);
		}
		/**
			0
		  /  \
		 0    0
		/ \  /  \
	   0   00    0
		*/
		TEST_METHOD(L1lL12L21L22L23L24NodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l11 = { 0 };
			TreeNode l21 = { 0 };
			TreeNode l22 = { 0 };
			TreeNode l23 = { 0 };
			TreeNode l24 = { 0 };
			TreeNode l12 = { 0 };
			tr.left = &l11;
			tr.right = &l12;
			l11.left = &l21;
			l11.right = &l22;
			l12.left = &l23;
			l12.right = &l24;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(4, actual);
		}
		/**
			0
		  /  \
		 0    0
		/    / 
	   0    0   
		*/
		TEST_METHOD(L1lL12L22nullL23nullNodeTree)
		{
			Solution sol = Solution();
			TreeNode tr = { 0 };
			TreeNode l11 = { 0 };
			TreeNode l21 = { 0 };
			TreeNode l22 = { 0 };
			TreeNode l23 = { 0 };
			TreeNode l24 = { 0 };
			TreeNode l12 = { 0 };
			tr.left = &l11;
			tr.right = &l12;
			l11.left = &l21;
			//l11.right = &l22;
			l12.left = &l23;
			//l12.right = &l24;
			int actual = sol.widthOfBinaryTree(&tr);
			Assert::AreEqual(3, actual);
		}
		TEST_METHOD(findFirstElement) {
			int a[] = { 0,1 };
			std::vector<int> av(std::begin(a), std::end(a));
			auto firstElementIt = std::find(av.begin(), av.end(), 1);
			ptrdiff_t startIndex = std::distance(av.begin(), firstElementIt);
			Assert::AreEqual(1, (int)startIndex);
		}
		TEST_METHOD(findLastElement) {
			int a[] = { 0,1,0,0,0,1 };
			int one[] = { 1 };
			std::vector<int> av(std::begin(a), std::end(a));
			auto firstElementIt = std::find_end(av.begin(), av.end(), one,one);
			//auto firstElementIt = std::find(av.rbegin(), av.rend(), 1);
			ptrdiff_t startIndex = std::distance(av.begin(), firstElementIt);
			Assert::AreEqual(6, (int)startIndex);
		}
		//TEST_METHOD(l1l22r1NodeTree)
		//{
		//	Solution sol = Solution();
		//	TreeNode tr = { 0 };
		//	TreeNode l1 = { 0 };
		//	TreeNode l2 = { 0 };
		//	TreeNode l22 = { 0 };
		//	TreeNode r1 = { 0 };
		//	tr.left = &l1;
		//	l1.left = &l2;
		//	l1.right = &l22;
		//	tr.right = &r1;
		//	int actual = sol.widthOfBinaryTree(&tr);
		//	Assert::AreEqual(2, actual);
		//}
		//TEST_METHOD(TwoRightNodeTree)
		//{
		//	Solution sol = Solution();
		//	TreeNode tr = { 0 };
		//	TreeNode r1 = { 0 };
		//	TreeNode r2 = { 0 };
		//	tr.right = &r1;
		//	r1.right = &r2;
		//	int actual = sol.widthOfBinaryTree(&tr);
		//	Assert::AreEqual(1, actual);
		//}

	};
}