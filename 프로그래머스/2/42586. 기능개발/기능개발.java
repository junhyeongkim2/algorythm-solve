import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        
        //7 3 9
        // 5 10 1 1 20 1
        
        
        Stack<Integer> stack = new Stack<>();
        
        
        for(int i = progresses.length-1 ; i >= 0; i--){
            
            int remainProgress =  100 - progresses[i];
            int day = remainProgress / speeds[i];
            
            if(remainProgress % speeds[i] != 0){
                day+=1;
            }
            
            stack.add(day);
            
        }
    
        System.out.println(stack.peek());
        int before = stack.pop();
        
        List<Integer> answer = new ArrayList<>();
        
        int count = 1;
        

        while(!stack.empty()){
            
            System.out.println(stack.peek());
            if(stack.peek() <= before){
                count++;
                stack.pop();
            } else{
                answer.add(count);
                count = 1 ;
                before = stack.pop();
                
            }
            
            
            if(stack.empty()){
                answer.add(count);
            }
            
            
        }
        

    
        
        return answer.stream().mapToInt(i->i).toArray();
    }
}