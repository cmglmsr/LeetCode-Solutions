class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prev = 0, prevprev = 0, temp = 0;
        for(int i = 0; i < cost.size(); i++) {
            if(prev + cost[i] < prevprev + cost[i]) {
                prevprev = prev;
                prev += cost[i];
            }
            else {
                temp = prev;
                prev = prevprev + cost[i];
                prevprev = temp;
            }
        }
        return (prev < prevprev) ? prev : prevprev;
    }
};