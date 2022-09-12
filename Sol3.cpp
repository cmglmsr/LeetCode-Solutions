class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<vector<int>> groups;
        groups.push_back({0});
        for(int i = 1; i < intervals.size(); i++) {
            vector<int> cur = intervals[i];
            bool placed = false;
            for(int j = 0; j < groups.size(); j++) {
                bool intersects = false;
                for(int k = 0; k<groups[j].size();k++) {
                    int in = groups[j][k];
                    if(cur[0]<=intervals[in][1] | cur[1]>=intervals[in][0]) {
                        intersects = true;
                        break;
                    }
                }
                if(!intersects) {
                    groups[j].push_back(i);
                    placed = true;
                    break;
                }
            }
            if(!placed) {
                vector<int> temp;
                temp.push_back(i);
                groups.push_back(temp);
            }
        }
        return groups.size();
    }
};