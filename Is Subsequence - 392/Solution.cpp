#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.length() < s.length())
            return false;
        int lastIndex = 0; int ensure = -1;
        for(int i = 0; i < s.length(); i++) {
            for(int j = lastIndex; j < t.length(); j++) {
                if(s[i] == t[j] & ensure != j) {
                    ensure = j;
                    lastIndex = j;
                    break;
                } 
                if(j == t.length()-1)
                    return false;
            }
        }
        return true;
    }
};