class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans=0,chi1=0,chi2=0,ped1=0,ped2=0;
        int n=rating.size();
        for(int i=1;i<rating.size()-1;i++)
        {
            chi1=0,chi2=0,ped1=0,ped2=0;
            for(int j=0;j<i;j++)
            {
                if(rating[j]<rating[i])
                {
                    chi1+=1;
                }
                if(rating[j]>rating[i])
                {
                chi2+=1;
                } 
            }
            for(int k=i+1;k<n;k++)
            {
                if(rating[i]<rating[k])
                {
                    ped1+=1;
                }
                if(rating[i]>rating[k])
                {
                    ped2+=1;
                }
            }
            ans+=chi1*ped1;
            ans+=chi2*ped2;
        }
        return ans;
    }
};