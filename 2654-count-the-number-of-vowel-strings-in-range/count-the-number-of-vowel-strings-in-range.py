class Solution:
    def vowelStrings(self, s: List[str], l: int, r: int) -> int:
        c=0
        v="AEIOUaeiou"
        for i in range(l,r+1):
            le=len(s[i])
            if(s[i][0] in v and s[i][-1] in v):
                c+=1
        return c;
        