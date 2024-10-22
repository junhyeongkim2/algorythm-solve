import java.util.*;

class Solution {
    public int[] solution(String my_string) {
        
        List<Integer> answer = new ArrayList<>();
        
    
        for(int i = 0 ; i < my_string.length(); i++){
            
            if(my_string.charAt(i)-'0'  <= 9){
                answer.add(my_string.charAt(i)-'0');
            }
            
        }
        
        Collections.sort(answer);
        
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}