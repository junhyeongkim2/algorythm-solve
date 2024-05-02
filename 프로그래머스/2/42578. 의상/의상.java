import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        
        
        HashMap<String,Integer> types = new HashMap<>();
        int answer =1 ;
        
        for(int i = 0 ; i < clothes.length; i++){
            types.put(clothes[i][1], types.getOrDefault(clothes[i][1],0) + 1);
        }
        
        for(String key :types.keySet()){
            answer *= types.get(key) + 1;   
        }
        
        
        return answer - 1;
    }
}