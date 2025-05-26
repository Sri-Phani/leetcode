import java.util.Map.Entry;
class Solution {
    public boolean areOccurrencesEqual(String s) {
        HashMap<Character,Integer> mpp=new HashMap<>();
        for(char i:s.toCharArray()){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
        }
        Set<Integer>hs=new HashSet<>();
        Set<Entry<Character,Integer>> entries= mpp.entrySet();
        for(Entry<Character,Integer>entry:entries){
            // Character key=entry.getKey();
            Integer value=entry.getValue();
            hs.add(value);
            // System.out.println(key+"<<<<<"+value);
        }

        return hs.size()==1;
    }
}