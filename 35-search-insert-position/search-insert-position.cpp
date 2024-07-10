class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int ans=lower_bound(nums.begin(),nums.end(),x)-nums.begin();
        return ans;
    }
};