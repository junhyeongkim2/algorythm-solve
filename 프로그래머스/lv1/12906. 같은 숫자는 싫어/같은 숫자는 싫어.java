import java.util.*;

public class Solution {
    public int[] solution(int []arr) {

        
        List<Integer>answer = new ArrayList<Integer>();
        
        
        
        int temp = -1;
        
        
        for(int i = 0 ; i < arr.length; i++){
            
            if(temp != arr[i]){
                answer.add(arr[i]);
                temp=arr[i];
            }
            
        }
        

        int[] returnAns = answer.stream().mapToInt(i->i).toArray();


        return returnAns;

    }
}