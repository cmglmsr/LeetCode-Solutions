class Solution {
public:
    int maximumRows(vector<vector<int>>& mat, int cols) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> cnt((1<<n), 0);
        for(int i = 0; i < m; i++) {
            int mask = 0;
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 1)
                    mask += (1<<j);
            }
            cnt[mask]++;
        }
        int mask;
        int ans = 0;
        for(mask = 0; mask < (1<<n); mask++) {
            if(__builtin_popcount(mask) != cols) continue;
            int cur = 0;
            for(int mask2 = 0; mask2 <= mask; mask2++) {
                if((mask2&mask) == mask2)
                    cur += cnt[mask2];
            }
            ans = max(ans,cur);
        }
        return ans;
    }
};