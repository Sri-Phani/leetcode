class Solution {
    private:
        void bfs(int node,vector<int>adj[],vector<int>&vis){
            queue<int>q;
            q.push(node);
            while(!q.empty()){
                int nod=q.front();
                q.pop();
                for(auto it:adj[nod]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }
        }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int cnt=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i]){
                cnt++;
                bfs(i,adj,vis);
            }
        }
        return cnt;
    }
};