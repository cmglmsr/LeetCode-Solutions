#include <string>
#include <set>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<pair<char,char>> charSet;
        for(int i = 0; i < s.length(); i++) {
            charSet.insert(pair<char,char>(s[i], t[i]));
        }
        for(auto i = charSet.begin(); i != charSet.end(); i++) {
            for(auto j = charSet.begin(); i != j; j++) {
                if(( i->first == j->first) | (i->second == j->second)){
                    return false;
                }
            }
        }
        return true;
    }
};
