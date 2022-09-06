class Solution {
public:
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        int n = chargeTimes.size();
        for(int window = n-1; window >= 0; window--) {
            int start = 0;
            int end = window;
            while(end != n) {
                int maxi = 0;
                int sum = 0;
                int total = 0;
                // max(chargeTimes) + k * sum(runningCosts)
                for(int i = start; i <= end; i++) {
                    maxi = max(maxi, chargeTimes[i]);
                    sum += runningCosts[i];
                }
                total = maxi + ((window+1)*sum);
                if(total <= budget) return window+1;
                start++; end++; 
            }
        }
        return 0;
    }
};