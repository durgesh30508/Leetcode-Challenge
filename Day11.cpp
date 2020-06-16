class Solution {
public:
    bool vis[100][100] = { false };
    
    void dfs(vector<vector<int>>& image,int i,int j,int c1,int c2){
        if(i>=0 and i<image.size() and j>=0 and j<image[0].size() and image[i][j]==c1 and vis[i][j]==false){
            image[i][j]=c2;
            vis[i][j]=true;
            dfs(image,i+1,j,c1,c2);
            dfs(image,i-1,j,c1,c2);
            dfs(image,i,j+1,c1,c2);
            dfs(image,i,j-1,c1,c2);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        dfs(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};
