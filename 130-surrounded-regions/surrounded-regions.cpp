class Solution {
private:
    void dfs(int r,int c,vector<vector<char>>& grid,vector<vector<int>>&vis,int delrow[],int delcol[])
    {
        int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
        for(int i=0;i<4;i++)
        {
            int nr=r+delrow[i];
            int nc=c+delcol[i];
            if(nr>=0 and nr<n and nc>=0 and nc<m and !vis[nr][nc] and grid[nr][nc]=='O')
            {
                dfs(nr,nc,grid,vis,delrow,delcol);
            }
        }
    }
public:
    void solve(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            if(!vis[0][i] and grid[0][i]=='O')
            {
                dfs(0,i,grid,vis,delrow,delcol);
            }
            if(!vis[n-1][i] and grid[n-1][i]=='O')
            {
                dfs(n-1,i,grid,vis,delrow,delcol);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i][0] and grid[i][0]=='O')
            {
                dfs(i,0,grid,vis,delrow,delcol);
            }
            if(!vis[i][m-1] and grid[i][m-1]=='O')
            {
                dfs(i,m-1,grid,vis,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] and grid[i][j]=='O')
                {
                    grid[i][j]='X';
                }
            }
        }
        // return grid;
        
    }
};