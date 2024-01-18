class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int total=0;
        for(int i=0;i<n;i++)
        {
            int subsum=0;
            for(int j=i;j<n;j++)
            {
                subsum+=arr[j];
                if(((j-i)+1)%2==1){
                    total+=subsum;
                }
            }
        }
        return total;
    }
};