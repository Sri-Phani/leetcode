class Solution {
public:
    int find(vector<int>w,int capacity)
    {
        int days=0;
        int load=0;
        for(int i=0;i<w.size();i++)
        {
            if(load+w[i]>capacity)
            {
                days+=1;
                load=w[i];
            }
            else{
                load+=w[i];
            }
        }
        days+=1;
        return days;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int low=*max_element(w.begin(),w.end());
        int high=accumulate(w.begin(),w.end(),0);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int d=find(w,mid);
            if(d<=days)
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