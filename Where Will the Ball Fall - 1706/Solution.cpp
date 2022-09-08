class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> res(n, 0);
        for(int i = 0; i < n; i++) {
            if(i==n-1 & grid[0][i]==1) { res[i] = -1; continue; }
            if(i==0 & grid[0][0]==-1) { res[i] = -1; continue; }
                
            int col = i;
            int row = 0;
            int b1, b2, dir;
            dir = grid[row][col];
            while(1) {
                b1 = grid[row][col];
                if((col == 0 & b1 ==-1) | (col == n-1 & b1==1))
                    res[i] = -1;
                if(dir==1)
                    b2 = grid[row][col+1];
                else
                    b2 = grid[row][col-1];
                if(b1 != b2) {
                    res[i] = -1;
                    break;
                }
                else {
                    row++; if(row >= m) { res[i] = col + grid[row-1][col]; break;}
                    if(b1==1 & grid[row][col]==1)
                        col++;
                    else if(b1==-1 & grid[row][col]==-1)
                        col--;
                }
            }
        }
        return res;
    }
};