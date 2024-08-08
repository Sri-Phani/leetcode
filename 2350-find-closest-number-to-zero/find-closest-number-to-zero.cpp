class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int hai=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])<=abs(hai)) hai=nums[i];
        }
        return hai;
    }
};