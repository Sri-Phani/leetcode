class Solution {
    typedef long long ll;
public:
    ll find(vector<int>bloomDay,int k,int day){
        ll tcnt=0;
        ll c=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day)
            {
                c++;
            }
            else{
                tcnt+=(c/k);
                c=0;
            }
        }
        tcnt+=(c/k);
        return tcnt;
    }
    ll minDays(vector<int>& bloomDay, ll m, ll k) {
        if(m*k>bloomDay.size()) return -1;
      
      ll low=*min_element(bloomDay.begin(),bloomDay.end());
      ll high=*max_element(bloomDay.begin(),bloomDay.end());
      while(low<=high)
      {
          ll mid=low+(high-low)/2;
          ll possibledays=find(bloomDay,k,mid);
          if(possibledays>=m)
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