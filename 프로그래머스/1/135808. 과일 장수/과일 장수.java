import java.util.*;

class Solution {
    public int solution(int k, int m, int[] score) {
    
        //444444222211
        //4*3
        //4*3
        //2*3
        //1*3
        //12+12+6+3 = 33
        
        score = Arrays.stream(score)
                .boxed()
                .sorted(Collections.reverseOrder())
                .mapToInt(Integer::intValue)
                .toArray();
        
        int result = 0 ;
        for(int i = 0 ; i < score.length; i++){
            
            if((i+1) % m == 0){
                result += score[i] * m;
            }
               
        }
        
        return result;
    }
}