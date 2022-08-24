class Solution {
public:

    void markIslandVisited(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
        visited[i][j] = 1;
        if(i+1 < visited.size() && grid[i+1][j] == '1')
            if(!visited[i+1][j])
                markIslandVisited(i+1, j, grid, visited);
        if(i-1 >= 0 && grid[i-1][j] == '1')
            if(!visited[i-1][j])
                markIslandVisited(i-1, j, grid, visited);
        if(j+1 < visited[0].size() && grid[i][j+1] == '1')
            if(!visited[i][j+1])
                markIslandVisited(i, j+1, grid, visited);
        if(j-1 >= 0 && grid[i][j-1] == '1')
            if(!visited[i][j-1])
                markIslandVisited(i, j-1, grid, visited);
    }

    int numIslands(vector<vector<char>>& grid) {

        vector<vector<bool>> visited;
        visited.assign(grid.size(), vector<bool>(grid[0].size(), 0));

        int count = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    if(!visited[i][j]) {
                        markIslandVisited(i,j,grid,visited);
                        count++;
                    }
                }
            }
        }
        return count;
    }
};