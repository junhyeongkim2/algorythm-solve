import java.util.*;

class Solution {
    public boolean solution(String[] phone_book) {
        
        Arrays.sort(phone_book);

        for(int i = 1 ; i < phone_book.length; i++){
            boolean flag = false;
            
            for(int j = 0 ; j < phone_book[i-1].length(); j++){
                
                if(phone_book[i].charAt(j) == phone_book[i-1].charAt(j)){
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
                
            }
            
            if(flag == true){
                return false;
            }
            
        }
        
    
        return true;
        
    }
}