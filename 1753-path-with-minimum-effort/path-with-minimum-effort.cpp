class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>>dis(n,vector<int>(m,1e9));
        dis[0][0]=0;
        pq.push({0,{0,0}});
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        while(!pq.empty())
        {
            int d=pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            if(r==n-1 and c==m-1) return d;
            for(int i=0;i<4;i++)
            {
                int nr=delrow[i]+r;
                int nc=delcol[i]+c;
                if(nr>=0 and nr<n and nc>=0 and nc<m){
                    int path=max(d,abs(heights[r][c]-heights[nr][nc]));
                    if(dis[nr][nc]>path){
                        dis[nr][nc]=path;
                        pq.push({path,{nr,nc}});
                    }
                }
            }
        }
        return -1;
    }
};