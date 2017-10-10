#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week53Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		//empty,
		//1 match,nomatch,
		//  repeating char target 1 or more stickers and not the first one
		//2 or more stickers to 2 or more char target
		//do not have a do not match situation
		//min stickers
		TEST_METHOD(Week53emptystickersandtarget)
		{
			Solution sol = Solution();
			vector<string> stickers;
			string target;
			int actual = sol.minStickers(stickers,target);
			Assert::AreEqual(-1, actual);
		}
		TEST_METHOD(Week53onestickermatch) {
			Solution sol = Solution();
			vector<string> stickers = { "w" };
			string target = "w";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week53onestickernomatch) {
			Solution sol = Solution();
			vector<string> stickers = { "a" };
			string target = "w";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(-1, actual);
		}
		TEST_METHOD(Week53twostickersecondmatch) {
			Solution sol = Solution();
			vector<string> stickers = { "a", "w" };
			string target = "w";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(1, actual);
		}
		//Do you match the target to the sticker or the sticker to the target?
		//You have to find the sticker in the target, it's what I would do by hand
		TEST_METHOD(Week53onestickercontainsmatch) {
			Solution sol = Solution();
			vector<string> stickers = { "aw" };
			string target = "w";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(1, actual);
		}
		//Do you match the target to the sticker or the sticker to the target?
		//remove duplicate stickers?
		//do not care about the number of characters - different problem if it does
		TEST_METHOD(Week53twostickerscontainmatch) {
			Solution sol = Solution();
			vector<string> stickers = { "aw","aw" };
			string target = "w";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(1, actual);
		}
		//do not care about the order
		TEST_METHOD(Week53onestickerissubstringnomatch) {
			Solution sol = Solution();
			vector<string> stickers = { "a" };
			string target = "aw";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(-1, actual);
		}
		//do not care about the order
		TEST_METHOD(Week53twostickerissubstring) {
			Solution sol = Solution();
			vector<string> stickers = { "a","w" };
			string target = "aw";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(2, actual);
		}
		//remove a sticker that is contained in another sticker
		TEST_METHOD(Week53twostickersallmatch) {
			Solution sol = Solution();
			vector<string> stickers = { "a","aw" };
			string target = "aw";
			int actual = sol.minStickers(stickers, target);
			Assert::AreEqual(1, actual);
		}
		TEST_METHOD(Week53CleanupStickersTwoUnmatchedStickers) {
			Solution sol = Solution();
			vector<string> stickers = { "a","w" };
			sol.removeRedundantStickers(stickers);
			Assert::AreEqual("a", stickers.at(0).c_str());
			Assert::AreEqual("w", stickers.at(1).c_str());
		}
		TEST_METHOD(Week53CleanupStickersTwoIdenticalStickers) {
			Solution sol = Solution();
			vector<string> stickers = { "a","a" };
			sol.removeRedundantStickers(stickers);
			Assert::AreEqual(1, (int)stickers.size());
			Assert::AreEqual("a", stickers.at(0).c_str());
		}
		TEST_METHOD(Week53CleanupStickersFourIdenticalStickers) {
			Solution sol = Solution();
			vector<string> stickers = { "a","a","a","a" };
			sol.removeRedundantStickers(stickers);
			Assert::AreEqual(1, (int)stickers.size());
			Assert::AreEqual("a", stickers.at(0).c_str());
		}
		TEST_METHOD(Week53CleanupStickers3IdenticalStickers) {
			Solution sol = Solution();
			vector<string> stickers = { "a","aw","a","a" };
			sol.removeRedundantStickers(stickers);
			Assert::AreEqual(2, (int)stickers.size());
			Assert::AreEqual("a", stickers.at(0).c_str());
		}
		//is this contained in another
		//abcw adefw keep the bigger or the smaller the bigger higher prob that it will match the target
		//rationalize the stickers
		//[a%aw] = w
		TEST_METHOD(Week53CleanupStickerssubset) {
			Solution sol = Solution();
			vector<string> stickers = { "a","aw" };
			sol.removeRedundantStickers(stickers);
			Assert::AreEqual(1, (int)stickers.size());
			Assert::AreEqual("aw", stickers.at(0).c_str());
		}
	};
}