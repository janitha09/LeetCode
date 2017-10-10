#pragma once
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int minStickers(vector<string>& stickers, string target);
	void removeRedundantStickers(vector<string>& stickers);
private:
	void Solution::removeDuplicate(vector<string>& stickers);
	void Solution::removeStickersThatAreContainedInOtherSticker(vector<string>& stickers);
};