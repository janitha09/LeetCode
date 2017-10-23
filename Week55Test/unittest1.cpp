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
			rgmdl.addRange(0, 0);
			bool actual = rgmdl.queryRange(0, 0);
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
		TEST_METHOD(Week5500addandcheck)
		{
			RangeModule rgmdl = RangeModule();
			rgmdl.addRange(0, 0);
			bool actual = rgmdl.queryRange(0, 0);
			Assert::AreEqual(true, actual);
		}
	};
}