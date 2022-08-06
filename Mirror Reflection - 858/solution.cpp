class Solution {
    public:
    int mirrorReflection(int p, int q) {
        int quotient = p/q, remainder = p%q, lcf = p;
        for(int i = 2; 1;i++) {
            if(lcf%q == 0) {
                break;
            }
            lcf = p * i;
        }
        if(p>q) {
            int hops = lcf / q;
            if(hops % 2 == 0)
                return 2;
            else {
                if((lcf/p) % 2 == 0)
                    return 0;
                else    
                    return 1;
            }
        }
        else {
            int hops = lcf / q;
            if(hops % 2 == 0)
                return 0;
            else {
                if((lcf/p) % 2 == 0)
                    return 2;
                else    
                    return 1;
            }
        }
    }
};

