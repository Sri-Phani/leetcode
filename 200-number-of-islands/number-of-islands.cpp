class Solution {
private:
    void dfs(int r,int c,vector<vector<int>>& vis,vector<vector<char>>& grid){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+delrow[i];
            int nc=c+delcol[i];
            if(nr>=0 and nr<n and nc>=0 and nc<m and !vis[nr][nc] and grid[nr][nc]=='1'){
                dfs(nr,nc,vis,grid);
            }
        }
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] and grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,vis,grid);
                    
                }
            }
        }
        return cnt;
    }
};