class Solution {
public:
    long long find(vector<int>piles,int mid)
    {
        long long s=0;
        for(int i=0;i<piles.size();i++)
        {
            s+=ceil((double)piles[i]/(double)mid);
        }
        return s;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        long long l=1;
        long long hi=*max_element(piles.begin(),piles.end());
        // cout<<hi<<" ";
        while(l<=hi)
        {
            long long mid=l+(hi-l)/2;
            long long totalhours=find(piles,mid);
            if(totalhours<=h)
            {
                hi=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};