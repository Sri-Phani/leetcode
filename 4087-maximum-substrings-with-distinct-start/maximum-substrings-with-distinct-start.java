class Solution {
    public int maxDistinct(String s) {
        HashMap<Character,Integer>mpp=new HashMap<>();
        for(char c:s.toCharArray()){
            mpp.put(c,mpp.getOrDefault(c,0)+1);
        }
        // for(Map.Entry<Character,Integer>e:mpp.entrySet()){
        //     System.out.print(e.getKey()+" "+e.getValue());
        // }
        return mpp.size();
        
    }
}