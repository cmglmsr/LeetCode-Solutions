#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> arr(200, 0);
        int len = 0;
        for(int i = 0; i < s.length(); i++) {
            arr[s[i]]++;
            if(arr[s[i]] > 0 & arr[s[i]] % 2 == 0)
                len += 2;
        }
        if(len != s.length())
            return len+1;
        return len;
    }
};