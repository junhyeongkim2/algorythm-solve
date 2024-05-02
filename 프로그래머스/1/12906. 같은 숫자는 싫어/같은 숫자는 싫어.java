import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        
        
        Stack<Integer> stack = new Stack<>();
        List<Integer> answer = new ArrayList<>();

        for(int i = 0 ; i < arr.length; i++){
            
            if(stack.size()==0){
                stack.add(arr[i]);
                answer.add(arr[i]);
                continue;
            }
            
            
            if(stack.peek()!=arr[i]){
                stack.add(arr[i]); 
                answer.add(arr[i]);
                continue;
            }
            
        }

        
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}