#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		//TEST_METHOD(oneelement)
		//{
		//	Solution sol = Solution();
		//	int myints[] = { 0 };
		//	std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

		//	Assert::AreEqual(sol.isPossible(fifth), false);
		//}

		//TEST_METHOD(twoelements)
		//{
		//	Solution sol = Solution();
		//	int myints[] = { 1,2 };
		//	std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

		//	Assert::AreEqual(sol.isPossible(fifth), false);
		//}

		TEST_METHOD(twolementsnosequence) //should have generalized from one
		{
			Solution sol = Solution();
			int myints[] = { 1,1 }; //gauranteed to be sorted so {1,0} don't care
			std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

			Assert::AreEqual(sol.isPossible(fifth), false);
		}

		TEST_METHOD(twoelementsequence) //should have generalized from one
		{
			Solution sol = Solution();
			int myints[] = { 1,2 }; //gauranteed to be sorted so {1,0} don't care
			std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

			Assert::AreEqual(sol.isPossible(fifth), true);
		}

		TEST_METHOD(threeelementsequence) //should have generalized from one
		{
			Solution sol = Solution();
			int myints[] = { 1,2,3 }; //gauranteed to be sorted so {1,0} don't care
			std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

			Assert::AreEqual(sol.isPossible(fifth), false);
		}

		TEST_METHOD(fourelementsequence) //should have generalized from one
		{
			Solution sol = Solution();
			int myints[] = { 1,2,3,4 }; //gauranteed to be sorted so {1,0} don't care
			std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

			Assert::AreEqual(sol.isPossible(fifth), true);
		}

		TEST_METHOD(fourelementnosequence) //should have generalized from one
		{
			Solution sol = Solution();
			int myints[] = { 1,2,4,3 }; //gauranteed to be sorted so {1,0} don't care
			std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

			Assert::AreEqual(sol.isPossible(fifth), false);
		}

		TEST_METHOD(fourelementrepeatedsequence) //should have generalized from one
		{
			Solution sol = Solution();
			int myints[] = { 1,2,3,3,4 }; //gauranteed to be sorted so {1,0} don't care
			std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

			Assert::AreEqual(sol.isPossible(fifth), true);
		}
		TEST_METHOD(fiveelementrepeatedsequence) //should have generalized from one
		{
			Solution sol = Solution();
			int myints[] = { 1,2,3,3,3,4 }; //gauranteed to be sorted so {1,0} don't care
			std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

			Assert::AreEqual(sol.isPossible(fifth), true);
		}
	};
}