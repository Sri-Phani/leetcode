class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it : flights) {
            adj[it[0]].push_back({it[1], it[2]});
        }
        vector<int> dis(n, INT_MAX);
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {src, 0}});
        dis[src] = 0;
        while(!q.empty()) {
            int steps = q.front().first;
            int node = q.front().second.first;
            int cost = q.front().second.second;
            q.pop();
            if(steps > k) continue;
            for(auto it : adj[node]) {
                int nn = it.first;
                int wei = it.second;
                if(dis[nn] > cost + wei && steps <= k) {
                    dis[nn] = cost + wei;
                    q.push({steps + 1, {nn, cost + wei}});
                }
            }
        }
        if(dis[dst] == INT_MAX) {
            return -1;
        }
        return dis[dst];
    }
};