#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week55Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Week5500addandcheck)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(0, 2);
			bool actual = rgmdl.queryRange(0, 1);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week5500addremovecheck)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(0, 0);
			rgmdl.queryRange(0, 0);
			rgmdl.removeRange(0, 0);
			bool actual = rgmdl.queryRange(0, 0);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week55a1to10q5to6)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(1, 10);
			bool actual = rgmdl.queryRange(5, 6);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week55a1to10a10to15q11to14)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(1, 10);
			rgmdl.addRange(10, 15);
			bool actual = rgmdl.queryRange(11, 14);
			Assert::AreEqual(15, rgmdl.getRoot()->maxHi);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week55a5to10a10to15a0to5q11to14)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(5, 10);
			rgmdl.addRange(10, 15);
			rgmdl.addRange(0, 5);
			bool actual = rgmdl.queryRange(11, 14);
			Assert::AreEqual(15, rgmdl.getRoot()->maxHi);
			Assert::AreEqual(true, actual);
			actual = rgmdl.queryRange(0, 4);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week55a5to10a10to15a4to5a3to5q11to14) 
		{
			//not sure why I have a tree just preserving the top 3 nodes
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(5, 10);
			rgmdl.addRange(10, 15);
			rgmdl.addRange(4, 5);
			rgmdl.addRange(3, 5);
			bool actual = rgmdl.queryRange(11, 14);
			Assert::AreEqual(15, rgmdl.getRoot()->maxHi);
			Assert::AreEqual(true, actual);
			actual = rgmdl.queryRange(0, 4);
			Assert::AreEqual(false, actual);
			actual = rgmdl.queryRange(3, 4);
			Assert::AreEqual(true, actual);
		}
		TEST_METHOD(Week55a5to10r10to15r5to10)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(5, 10);
			rgmdl.addRange(10, 15);
			rgmdl.removeRange(5, 10);
			bool actual = rgmdl.queryRange(5, 6);
			Assert::AreEqual(15, rgmdl.getRoot()->maxHi);
			Assert::AreEqual(10, rgmdl.getRoot()->minLo);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week55a5to10a10to15r10to15)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(5, 10);
			rgmdl.addRange(10, 15);
			rgmdl.removeRange(10, 15);
			bool actual = rgmdl.queryRange(10, 15);
			Assert::AreEqual(10, rgmdl.getRoot()->maxHi);
			Assert::AreEqual(5, rgmdl.getRoot()->minLo);
			Assert::AreEqual(false, actual);
		}
		TEST_METHOD(Week55a1to10r5to7q5to6)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(1, 10);
			rgmdl.removeRange(5, 7);
			bool actual = rgmdl.queryRange(5, 6);
			Assert::AreEqual(10, rgmdl.getRoot()->maxHi);
			Assert::AreEqual(5, rgmdl.getRoot()->minLo);
			Assert::AreEqual(false, actual);
		}
	};
}