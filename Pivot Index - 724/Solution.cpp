#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 1) 
            return 0;
        int sum = 0, sumLeft = 0, sumRight = 0;
        for(auto i = nums.begin(); i != nums.end(); i++)
            sum += *i;
        sumRight = sum - nums[0];
        if(sumRight == 0) 
            return 0;
        for(int i = 1; i<nums.size(); i++) {
            sumLeft += nums[i-1];
            sumRight = sumRight - nums[i];
            if(sumLeft==sumRight)
                return i;
        }
        return -1;
    }
};