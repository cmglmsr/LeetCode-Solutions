#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int maximumRows(vector<vector<int>>& mat, int cols) {
        map<vector<int>,int> mp;
        int max = 0;
        int extra = 0;
        for(int i = 0; i < mat.size(); i++) {
            vector<int> cur;
            bool allzero = true;
            for(int j = 0; j < mat[0].size(); j++) {
                if(mat[i][j] == 1) {
                    cur.push_back(j);
                    allzero = false;
                }
            }
            if(allzero)
                extra++;
            if(cur.size() <= cols)
                mp[cur]++;
            if(mp[cur] > max)
                max = mp[cur];
        }
        return max + extra;
    }
};