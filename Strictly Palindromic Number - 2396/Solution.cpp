class Solution {
public:
    bool isStrictlyPalindromic(int n) {
       for(int base = 2; base <= n-2; base++) {
            int n1 = n;
            string s = "";
            while(n1>0) {
                int rem = n1%base;
                string temp = to_string(rem);
                s += temp;
                n1=n1/base;
            }
            string s1 = s;
            reverse(s.begin(), s.end());
            if(s != s1) return false;
       }
        return true;
    }
};