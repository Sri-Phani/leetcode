class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        set<int>S;
        sort(nums.begin(),nums.end());
        for(auto it:nums){
            S.insert(it);
        }
        // for(auto it:nums){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // for(auto it:S){
        //     cout<<it<<" ";
        // }
        // return nums.size()-k+1;
        return nums[nums.size()-k];
    }
};