#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;  // value - index
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            if(target-nums[i]==nums[i] && map.find(nums[i]) != map.end()) {
                res.push_back(map[nums[i]]);
                res.push_back(i);
                return res;
            }
            map[nums[i]] = i;
            if(map.find(target-nums[i]) != map.end() && map[target - nums[i]] != i) {
                res.push_back(i);
                res.push_back(map[target-nums[i]]);
                return res;
            }
        }
        return res;
    }
};