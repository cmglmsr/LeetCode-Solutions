class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1 = "", str2 = "";
        int len = 0;
        (s.length() < t.length()) ? len = s.length() : len = t.length();
        for(int i = 0; i < len; i++) {
            if(s[i] == '#') {
                if(str1.length()>0) str1.pop_back();
            }
            else
                str1.push_back(s[i]);
            if(t[i] == '#') {
                if(str2.length()>0)  str2.pop_back();
            }
            else
                str2.push_back(t[i]);
        }
        for(int j = len; j < s.length(); j++) {
            if(s[j] == '#') {
                if(str1.length()>0) str1.pop_back();
            }
            else
                str1.push_back(s[j]);
        }
        for(int j = len; j < t.length(); j++) {
            if(t[j] == '#') {
                if(str2.length()>0) str2.pop_back();
            }
            else
                str2.push_back(t[j]);
        }
        return str1 == str2;
    }
};