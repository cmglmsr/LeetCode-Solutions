// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

#include <vector>
using namespace std;

class Solution {
public:

    int bSearch(int i, int j) {
        while(i<j) {
            long int middle = (i+j) / 2;
            if(isBadVersion(middle)) {
                if(isBadVersion(middle-1))
                    j = middle;
                else
                    return middle;
            }
            else {
                if(isBadVersion(middle+1))
                    return middle+1;
                else    
                    i = middle;
            }
        }
        return -1;
    }

    int firstBadVersion(int n) {
        if( n == 1)
            return n;
        return bSearch(1, n);        
    }
};