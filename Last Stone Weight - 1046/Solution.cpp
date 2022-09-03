#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(), stones.end());
        int s1, s2;
        while(stones.size() > 1) {
            s1 = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            s2 = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            if(s1 == s2) 
                continue;
            else {
                s1 = s1 - s2;
                stones.push_back(s1);
                push_heap(stones.begin(), stones.end());
            }
        }
        if(stones.size() > 0)
            return stones[0];
        return 0;
    }
};