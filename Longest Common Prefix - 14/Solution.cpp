class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {        
        if(strs.size()==1)
            return strs[0];
        string prefix = "";
        string longer = "";
        string shorter = "";
        if(strs[1].length() >= strs[0].length()) {
            longer = strs[1]; shorter = strs[0];
        }
        else {
            longer = strs[0]; shorter = strs[1];
        }
        for(int j = 0; j < shorter.length(); j++) {
            if(shorter[j]==longer[j])
                prefix += shorter[j];
            else
                break;
        }
        if(prefix.length()==0) return prefix;
        for(int i = 2; i < strs.size(); i++) {
            while(strs[i].substr(0, prefix.length()) != prefix) {
                prefix = prefix.substr(0, prefix.length()-1);
            }
        }
        return prefix;
    }
};