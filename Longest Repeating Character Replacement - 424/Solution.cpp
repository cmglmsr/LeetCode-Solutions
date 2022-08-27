#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<int,int> map;
        int maxFrequency = 0; int window = 0;
        for(int i = 0; i < s.length(); i++) {
            maxFrequency = max(maxFrequency, ++map[s[i]]);
            if(window < maxFrequency + k)
                window++;
            else
                map[s[i - window]]--;
        }
        return window;
    }
};