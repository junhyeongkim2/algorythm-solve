import java.util.*;

class Solution {
    public int solution(int[] sides) {
        
        int maxLine = 0;
        int maxLineIndex = 0;
        
        
        
        for(int i = 0 ; i < sides.length; i++){
            if(maxLine < sides[i]){
                maxLine = Math.max(maxLine,sides[i]);    
                maxLineIndex = i;
            }
        }
        
        int twoLine = 0;
        
        for(int i = 0 ; i < sides.length; i++){
            
            if(i != maxLineIndex){
                twoLine += sides[i];
            }
        }
        
        int answer = 0;
        
        if(twoLine <= maxLine){
            answer = 2;
        }
        
        if(twoLine > maxLine){
            answer = 1;
        }
        
        return answer;
    }
}