#include <vector>
#include <utility>
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:

    vector<int> findAnagrams(string s, string p) {
        if(s.length() < p.length())
            return vector<int>();
        
        unordered_map<char,int> letters;
        for(int i = 0; i < p.length(); i++) {
            letters[p[i]]++;
        }

        vector<int> indices;
        int first=0, last=p.length()-1;
        unordered_map<char,int> cur;
        for(int i = 0; i < p.length(); i++) {
            cur[s[i]]++;
        }

        do {
            if(cur == letters)
                indices.push_back(first);
            cur[s[first]]--;
            if(cur[s[first]] == 0)
                cur.erase(s[first]);
            first++;
            last++;
            cur[s[last]]++;
        } while(last < s.length());

        return indices;
    }
};