class Solution:
    def maxArea(self, h: List[int]) -> int:
        l=0
        r=len(h)-1
        maxi=0
        while(l<=r):
            maxi=max(maxi,((min(h[l],h[r]))*(r-l)))
            if(h[l]<h[r]):
                l+=1
            else:
                r-=1
        return maxi

        