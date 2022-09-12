class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        unordered_map<string,int> tuples;
        int pal = 0;
        for(int i = 0; i < words.size(); i++) {
            string s = words[i];
            string srev = s;
            reverse(srev.begin(),srev.end());
            mp[s]++;
            if((s[1]!=s[0]) && mp[srev] > 0) {
                pal += 4;
                mp[s]--;
                mp[srev]--;
            }
            if(srev==s) {
                tuples[s]++;
            }
        }
        bool odd = 0;
        for(pair<string,int> x: tuples) {
            if(x.second % 2 == 0)
                pal += x.second*2;
            else {
                odd = 1;
                pal+=(x.second-1)*2;
            }     
        }
        if(odd) pal += 2;
        return pal;
    }
};