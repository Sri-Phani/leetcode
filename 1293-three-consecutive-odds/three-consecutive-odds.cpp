class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c=0;
        for(auto it:arr)
        {
            if(it&1){
                c++;
                if(c==3) return true;
            }
            else{
                c=0;
            }
        }
        return false;
    }
};