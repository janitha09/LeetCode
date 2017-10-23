#include "Header.h"
int Solution::minStickers(vector<string>& stickers, string target) {
	if (stickers.size() == 0 || target.length() == 0) return -1;
	int numberofmatchingstickers = 0;
	removeDuplicate(stickers);
	//removeStickersThatAreContainedInOtherSticker(stickers);
	//sort(target.begin(), target.end());
	//something to hold teh matching chars
	vector<string> matchedStickers;
	for (int stickerIndex = 0; stickerIndex < stickers.size(); ++stickerIndex) {
		string sticker = stickers.at(stickerIndex);
		//sort(sticker.begin(), sticker.end());
		for (int stickerCharIndex = 0; stickerCharIndex < sticker.length(); ++stickerCharIndex) {
			for (int targetCharIndex = 0; targetCharIndex < target.length(); ++targetCharIndex) {
				if (sticker.at(stickerCharIndex) == target.at(targetCharIndex)) {
					target.erase(remove(target.begin(), target.end(), sticker.at(stickerCharIndex)), target.end());
					++numberofmatchingstickers;
				}
			}
		}
	}
	return numberofmatchingstickers == 0 || target.length() > 0 ? -1 : numberofmatchingstickers;
}

void Solution::removeDuplicate(vector<string>& stickers) {
	sort(stickers.begin(), stickers.end());
	vector<string>::iterator it = unique(stickers.begin(), stickers.end());
	stickers.erase(it, stickers.end());
}
//should have been handles in remove duplicates - how does std::unique work
void Solution::removeStickersThatAreContainedInOtherSticker(vector<string>& stickers) {
	//take the first element or any element and look for it in all others 
	//take the first letter of the first element
	//this getin stupid 4 levels nested. you have to compare 
	for (int stickerIndex = 0; stickerIndex < stickers.size(); ++stickerIndex) {
		string sticker = stickers.at(stickerIndex);
		for (int targetIndex = 0; targetIndex < stickers.size(); ++targetIndex) {
			string targetSticker = stickers.at(targetIndex);
			for (int stickerCharIndex = 0, targetCharIndex = 0; stickerCharIndex < sticker.length(); ++stickerCharIndex) {
				//if (sticker.at(stickerCharIndex) == targetSticker.at(targetCharIndex)) ++numberofmatchingstickers;
			}
		}

	}
}

void Solution::removeRedundantStickers(vector<string>& stickers) {
	for (int outerIndex = 0; outerIndex < stickers.size(); ++outerIndex) {
		for (int index = stickers.size() - 1; index > outerIndex; --index) {
			if (stickers.at(outerIndex) == stickers.at(index)) {
				stickers.pop_back();
			}
		}
	}
	//which one is bigger mod from the bigger aw%a = w, a%aw = a
	for (int stickerIndex = 0; stickerIndex < stickers.size(); ++stickerIndex) {
		string sticker = stickers.at(stickerIndex);
		for (int targetIndex = stickerIndex+1; targetIndex < stickers.size(); ++targetIndex) {
			string target = stickers.at(targetIndex);
			if (sticker.length() < target.length()) { //whack the smaller one
				string temp = sticker;
				sticker = target;
				target = sticker; //still a reference so corrupting data if you need to back out
			}
			//sort(sticker.begin(), sticker.end());
			for (int stickerCharIndex = 0; stickerCharIndex < sticker.length(); ++stickerCharIndex) {
				for (int targetCharIndex = 0; targetCharIndex < target.length(); ++targetCharIndex) {
					if (sticker.at(stickerCharIndex) == target.at(targetCharIndex)) {
						target.erase(remove(target.begin(), target.end(), sticker.at(stickerCharIndex)), target.end());
						//++numberofmatchingstickers;
					}
				}
			}
		}
	}
	//the is the same as the remove duplicate code.
}
void Solution::KMP(string& matchthis, string& tothis) {

}
int ** Solution::KMPDFA(string &subStr,const int h, const int w) {
	//int sdf[h][w];
	int **dfa = new int *[256];
	for (int i = 0; i < 256; ++i) {
		dfa[h] = new int[subStr.length()];
	}
	dfa[subStr[0]][0] = 1; //starting state
	//j is the state
	for (int i = 0,j=1; i < subStr.length(); ++i,++j) {
		//dfa[subStr[i]][j]=
	}
	return dfa;
}