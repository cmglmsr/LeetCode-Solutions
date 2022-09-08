class Solution {
public:
    bool isHappy(int n) {
        string s = to_string(n);
        unordered_map<long long int, bool> prevs;
        long long int sum = 0;
        while(1) {
            sum = 0;
            for(int i = 0; i < s.length(); i++) {
                int cur = s[i] - 48;
                sum += (cur*cur);
            }
            if(sum==1) return true;
            if(prevs[sum]) return false;
            prevs[sum] = 1;
            s = to_string(sum);
        }
    }
};