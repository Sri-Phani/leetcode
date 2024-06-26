class Solution {
public:
    int bs(vector<int>&nums,int l,int h,int t){
        if(l>h) return -1;
        int mid=(l+h)/2;
        if(nums[mid]==t) return mid;
        else if(nums[mid]>t) return bs(nums,l,mid-1,t);
        return bs(nums,mid+1,h,t);
    }
public:
    int search(vector<int>& nums, int target) {
        return bs(nums,0,nums.size()-1,target);
    }
};