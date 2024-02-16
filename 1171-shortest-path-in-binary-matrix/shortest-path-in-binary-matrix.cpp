class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]==1 || grid[n-1][m-1]==1) return -1;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        vis[0][0]=1;
        int c=0;
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int step=q.front().second;
            c=step;
            q.pop();
            if(row==n-1 and col==m-1) return step;
            for(int i=-1;i<=1;i++)
            {
                for(int j=-1;j<=1;j++)
                {
                    int nr=i+row;
                    int nc=j+col;
                    if(nr>=0 and nr<n and nc>=0 and nc<m and !vis[nr][nc] and grid[nr][nc]==0)
                    {
                        vis[nr][nc]=1;
                        q.push({{nr,nc},step+1});
                    }
                }
            }
        }
        return -1;
    }
};