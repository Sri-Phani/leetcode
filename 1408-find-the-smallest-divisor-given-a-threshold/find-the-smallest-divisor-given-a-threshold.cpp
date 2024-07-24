class Solution {
    
public:
    int find(vector<int>nums,int mid)
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=ceil((double)nums[i]/(double)mid);
        }
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int ans=find(nums,mid);
            if(ans<=threshold)
            {
                high=mid-1;
            }
            else{
                
                low=mid+1;
            }
        }
        return low;
    }
};