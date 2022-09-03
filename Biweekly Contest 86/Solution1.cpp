#include <unordered_map>
using namespace std;

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int> sums;
        for(int i = 0; i < nums.size()-1; i++) {
            if(sums.find(nums[i] + nums[i+1]) != sums.end()) {
                return true;
            }
            sums[nums[i] + nums[i+1]] = i;
        }
        return false;
    }
};