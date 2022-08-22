#include <cmath>

class Solution {
public:
    int fib(int n) {
        int arr[46];
        arr[0] = 1;
        arr[1] = 1;
        for(int i = 2; i <=n; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n-1];
    }
    int climbStairs(int n) {
        return fib(n);
    }
};