#include "Solution.h"
#include <unordered_map>


int Solution::lengthOfLongestSubstring(string s){
	unordered_map<char, int> map;
	int max = 0;
	int start = -1;
	for (int i = 0; i < s.size(); i++) {
		if (map.count(s[i]) && map[s[i]] > start) {
			start = map[s[i]];
		}
		map[s[i]] = i;
		max = std::max(max, i - start);
	}
	return max;
}
