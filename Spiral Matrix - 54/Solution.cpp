class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> res(m*n,0);
        vector<bool> visited(m*n,0);
        int i=0,j=0;
        int dir = 0; // 0:right 1:down: 2:left 3:up
        while(true) {
            res.push_back(matrix[i][j]);
            visited[i*n+j] = 1;
            if(res.size() == m*n) break;
            if(dir==0 & (j==n-1 | visited[i*n+(j+1)]==1))
                dir=1;
            else if(dir==1 & (i==m-1 | visited[(i+1)*n+(j)]==1))
                dir=2;
            else if(dir==2 & (j==0 | visited[i*n+(j-1)]==1))
                dir=3;
            else if(dir==3 & (i==0 | visited[(i-1)*n+(j)]==1))
                dir=0;
            
            if(dir==0) j++;
            else if(dir==1) i++;
            else if(dir==2) j--;
            else i--;
            
        }
        return res;
    }
};