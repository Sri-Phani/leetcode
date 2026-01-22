class Solution {
    public int[] leftRightDifference(int[] nums) {
        int n=nums.length;
        int[] arr1=new int[n];
        int[] arr2=new int[n];
        arr1[0]=0;
        arr2[n-1]=0;
        for(int i=0;i<n-1;i++)
        {
            arr1[i+1]=arr1[i]+nums[i];
        }
        for(int i=n-1;i>0;i--)
        {
            arr2[i-1]=arr2[i]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=Math.abs(arr1[i]-arr2[i]);
        }
        return nums;
    }
}