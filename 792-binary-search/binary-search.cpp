class Solution {
public:
    int search(vector<int>& arr, int target) {
        int mid=0,l=0,h=arr.size()-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(target>arr[mid]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }
};