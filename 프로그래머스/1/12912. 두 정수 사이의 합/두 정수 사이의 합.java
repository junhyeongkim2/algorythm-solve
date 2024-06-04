import java.util.*;

class Solution {
    public long solution(int a, int b) {
        
        
        int left = 0;
        int right = 0;
        
        if( a < b){
            left = a;
            right = b;
        }else{
            left = b;
            right = a;
        }
        
        
        long answer = 0;
        
        for(int i = left; i <= right; i++){
            answer+=i;
        }
        
        
        return answer;
    }
}