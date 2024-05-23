import java.util.*;

class Solution {
    boolean solution(String s) {
        
        int pCount = 0;
        int yCount = 0;
        
        for(int i = 0 ; i < s.length(); i++){
            
            if(s.charAt(i) == 'p' || s.charAt(i) == 'P'){
                pCount++;
            }
            
            if(s.charAt(i) == 'y' || s.charAt(i) == 'Y'){
                yCount++;
            }
            
        }
        
        if(pCount == 0 && yCount == 0){
            return true;
        }
        
        if(pCount == yCount){
            return true;
        }
        
        return false;
        
    
    }
}