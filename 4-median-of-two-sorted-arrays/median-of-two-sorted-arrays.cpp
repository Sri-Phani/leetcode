class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,c=0,ele1=0,ele2=0;
        int n=nums1.size()+nums2.size();
        int x=n/2;
        int y=x-1;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                if(c==y)
                {
                    ele1=nums1[i];
                }
                if(c==x){
                    ele2=nums1[i];
                }
                c++;
                i++;
            }
            else
            {
                if(c==y)
                {
                    ele1=nums2[j];
                }
                if(c==x){
                    ele2=nums2[j];
                }
                c++;
                j++;
            }
        }
        while(i<nums1.size())
        {            
            if(c==y)
            {
                ele1=nums1[i];
            }
            if(c==x){
                ele2=nums1[i];
            }
            c++;
            i++;
        }
        while(j<nums2.size())
        {            
            if(c==y)
            {
                ele1=nums2[j];
            }
            if(c==x){
                ele2=nums2[j];
            }
            c++;
            j++;
        }
        if(n%2==0){
                return (ele1+ele2)/2.0;
            }
            else{
                return ele2;
            }
    }
};