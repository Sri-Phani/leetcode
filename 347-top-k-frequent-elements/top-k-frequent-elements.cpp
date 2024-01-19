 bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
        {
       return a.second>b.second;
        }
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        vector<pair<int,int>>v;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:mpp){
            v.push_back(make_pair(it.first,it.second));
        }
        sort(v.begin(),v.end(),sortbysecdesc);
        // for(auto it:v){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};