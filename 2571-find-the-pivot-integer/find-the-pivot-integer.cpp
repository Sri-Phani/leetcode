class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return n;
        int pre[n+1];
        pre[0]=1;
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+i+1;
        }
        for(int i=1;i<n;i++){
            if(pre[i]==pre[n-1]-pre[i-1]){
                return i+1;
            }
        }
        return -1;
        
        
        // return 0;
    }
};