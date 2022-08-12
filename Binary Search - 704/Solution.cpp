class Solution {
public:

    int bSearch(vector<int>& nums, int target, int i, int j) {
        if(i > j)
            return -1;
        int middle = (i + j)/2;
        if(nums[middle] == target) 
            return middle;
        else if( target < nums[middle])
            return bSearch(nums, target, i, middle-1);
        else
            return bSearch(nums, target, middle+1, j);
        
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return bSearch(nums, target, 0, nums.size()-1);        
    }
};