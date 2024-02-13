class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        c=0
        for i in range(len(words)):
            s=words[i]
            # print(s,end=" ")
            if(s==s[::-1]):
                # print(words[i])
                return words[i]
                c=1
                break
            # return 
        if(c==0):
            return ""