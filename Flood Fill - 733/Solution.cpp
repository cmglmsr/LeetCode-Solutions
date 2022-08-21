#include <vector>

class Solution {

public:
    void fill(vector<vector<int>>& image, int sr, int sc, int color, int stColor, vector<vector<bool>>& visited) {
        image[sr][sc] = color;
        visited[sr][sc] = 1;
        if(sr+1 < image.size() && image.at(sr+1).at(sc) == stColor)
            if(!visited[sr+1][sc]) 
                fill(image, sr+1, sc, color, stColor, visited);
        if(sr-1 >= 0 && image.at(sr-1).at(sc) == stColor)
            if(!visited[sr-1][sc])
                fill(image, sr-1, sc, color, stColor, visited);
        if(sc+1 < image[0].size() && image.at(sr).at(sc+1) == stColor)
            if(!visited[sr][sc+1])
                fill(image, sr, sc+1, color, stColor, visited);
        if(sc-1 >= 0 && image.at(sr).at(sc-1) == stColor)
            if(!visited[sr][sc-1])
                fill(image, sr, sc-1, color, stColor, visited);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> visited;
        visited.assign(image.size(), vector<bool>(image[0].size(), 0));
        fill(image,sr,sc,color,image[sr][sc],visited);
        return image;
    }
};