class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s(arr.begin(),arr.end());
        map<int,int>mpp;
        int i=1;
        for(auto it:s)
        {
            mpp[it]=i;
            i+=1;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mpp[arr[i]];
        }
        // for(auto it:mpp){
        //     cout<<it.first<<" "<<it.second<<endl;;
        // }
        return arr;
    }
};