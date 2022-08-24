class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m > n) {
            long double factUp = 1, factDown = 1;
            for(int i = m + n - 2; i > m - 1; i--) {
                factUp *= i;
            }
            for(int j = 1; j <= n-1; j++) {
                factDown *= j;
            }
            return factUp / factDown;
        }
        else {
            long double factUp = 1, factDown = 1;
            for(int i = m + n - 2; i > n - 1; i--) {
                factUp *= i;
            }
            for(int j = 1; j <= m-1; j++) {
                factDown *= j;
            }
            return factUp / factDown;
        }
    }
};