import java.util.*;
class Solution {
    public int solution(String my_string) {
        
        int answer = 0;
        
        System.out.println(Character.isDigit(my_string.charAt(0)));
        
        for(int i = 0 ; i < my_string.length(); i++){
            if(Character.isDigit(my_string.charAt(i))){
                answer += Character.getNumericValue(my_string.charAt(i));
            }
        }
        
        
        
        
     
        return answer;
    }
}