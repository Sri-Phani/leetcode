class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        HashMap<Integer,Integer>mpp=new HashMap<>();
        int n=nums.length;
        for(int it:nums){
            mpp.put(it,mpp.getOrDefault(it,0)+1);
        }
        int i=0,c=0;
        for(int key:mpp.keySet()){
            if(mpp.get(key)==2){
                c+=1;
            }
        }
        int[] ans=new int[c];
        for(int key:mpp.keySet()){
            if(mpp.get(key)==2){
                ans[i++]=key;
            }
        }
        return ans;
    }
}