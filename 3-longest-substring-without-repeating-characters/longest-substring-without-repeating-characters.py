class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxi=0
        l=0
        r=0
        res=set()
        for r in range(len(s)):
            while s[r] in res:
                res.remove(s[l])
                l+=1
            res.add(s[r])
            maxi=max(maxi,r-l+1);
        return maxi
        