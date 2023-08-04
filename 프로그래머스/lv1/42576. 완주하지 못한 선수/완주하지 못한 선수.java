import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        
        
        
        Arrays.sort(participant);
        Arrays.sort(completion);
        
        String answer = "";
        
        Boolean flag = false;
        
        for(int i = 0; i < completion.length; i++ ){
            if(!participant[i].equals(completion[i])){
                answer = participant[i];
                flag = true;
                break;
            }
        }
        
        if(flag == false){
            return participant[participant.length-1];
        }else{
            return answer;
        }
        
        
        
        
        
    }
}