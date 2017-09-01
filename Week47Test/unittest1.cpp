#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week47Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(week47zeroxzero)
		{
			Solution sol = Solution();
			//zero's are invalid
			int actual = sol.findKthNumber(0, 0, 0);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(week47onexone)
		{
			Solution sol = Solution();
			int actual = sol.findKthNumber(1, 1, 3);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(week47ninexone)
		{
			Solution sol = Solution();
			int actual = sol.findKthNumber(9, 1, 3);
			Assert::AreEqual(3, actual);
		}
		TEST_METHOD(week47onexnine)
		{
			Solution sol = Solution();
			int actual = sol.findKthNumber(1, 9, 3);
			Assert::AreEqual(3, actual);
		}
		TEST_METHOD(week47twoxtwo1)
		{
			Solution sol = Solution();
			int actual = sol.findKthNumber(2, 2, 1);
			Assert::AreEqual(1, actual);//(1)
		}
		TEST_METHOD(week47twoxtwo2)
		{
			Solution sol = Solution();
			int actual = sol.findKthNumber(2, 2, 2);
			Assert::AreEqual(2, actual); //(1,2)
		}
		TEST_METHOD(someonessolution) {
			findk(2, 1, 1);
		}
		TEST_METHOD(forloop) {
			wchar_t message[200];
			for (int i = 0; i <= 1; ++i) {
				_swprintf(message, L"i %d\n", i);
				Logger::WriteMessage(message);
			}
		}
		TEST_METHOD(BinarySearchOnArray1element) {
			Solution sol = Solution();
			int val [] = { 1 };
			int target = 1;
			int actual = sol.BinarySearchFindIndex(val, target,1);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(BinarySearchOnArray2elemnts) {
			Solution sol = Solution();
			int val[] = { 1,2 };
			int target = 2;
			int actual = sol.BinarySearchFindIndex(val, target,2);
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(BinarySearchOnArray2elemntsless) {
			Solution sol = Solution();
			int val[] = { 1,2 };
			int target = 1;
			int actual = sol.BinarySearchFindIndex(val, target, 2);
			Assert::AreEqual(0, actual);
		}
		TEST_METHOD(BinarySearchOnArray3elemntsgreater) {
			Solution sol = Solution();
			int val[] = { 1,2,3 };
			int target = 3;
			int actual = sol.BinarySearchFindIndex(val, target, 3);
			Assert::AreEqual(2, actual);
		}
		TEST_METHOD(BinarySearchOnArray3elemntsless) {
			Solution sol = Solution();
			int val[] = { 1,2,3 };
			int target = 1;
			int actual = sol.BinarySearchFindIndex(val, target, 3);
			Assert::AreEqual(0, actual);
		}
	};
}
#include <algorithm>
#include <iostream>
#include <string>
wchar_t message[200];
long long count(long long n, long long m, long long x)
{
	long long j = std::min(m, x), k = std::min(n, x), num = 0;
	_swprintf(message, L"count start m,n,x,j,k,num %llu,%llu,%llu,%llu,%llu,%llu\n", m, n, x, j, k, num);
	Logger::WriteMessage(message);
	for (long long i = 1; i <= k; ++i)
	{

		while (i * j > x) {
			--j;
			//std::cout << " count while loop j: " << j << std::endl;
			_swprintf(message, L"count while loop j: i*j, x %llu,%llu,%llu\n", j,i*j,x);
			Logger::WriteMessage(message);
		}
		num += j;
		//std::cout << " count for loop i, num : " << i << " , " << num << std::endl;
		_swprintf(message, L" count for loop i, num :  %llu, %llu\n", i,num);
		Logger::WriteMessage(message);
	}
	_swprintf(message, L" count end num :  %llu, \n", num);
	Logger::WriteMessage(message);
	return num;

}

int findk(long long n, long long m, long long k)
{
	/*long long n, m, k;
	std::cin >> n >> m >> k;*/
	long long l = 1, r = n * m + 1;
	_swprintf(message, L"findk start l , r %llu,%llu\n", l, r);
	Logger::WriteMessage(message);
	while (r - l > 1)
	{
		long long c = (l + r) / 2;
		_swprintf(message, L"findk while(r-l>1) r,c %llu,%llu\n", r - l,c);
		Logger::WriteMessage(message);
		if (count(n, m, c) < k) {
			l = c;
			_swprintf(message, L"findk if(count) l %llu\n", l);
			Logger::WriteMessage(message);
		}
		else {
			r = c;
			_swprintf(message, L"findk else(count) l %llu\n", r);
			Logger::WriteMessage(message);
		}
	}
	if (k < 2)
		--r;
	std::cout << r << std::endl;
	_swprintf(message, L"findk result %llu\n", r);
	Logger::WriteMessage(message);
	return 0;
}