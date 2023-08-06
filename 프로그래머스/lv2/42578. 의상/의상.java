
import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        
        HashMap<String,Integer> map = new HashMap<String,Integer>();
        
        for(int i = 0 ; i < clothes.length; i++){
            
            
            if(map.containsKey(clothes[i][1])){
                int tmp = map.get(clothes[i][1]);
                map.put(clothes[i][1],tmp+1);
            }else{
                map.put(clothes[i][1],1);
            }
                            
        
        }
        
        int answer = 1;

        for(String k : map.keySet()){
            System.out.println(k);
            answer *= (map.get(k)+1);
            
        }
        
        return answer-1;
    }
}