import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        
        String answer = "";
        Map<String,Integer> participantCounts = new HashMap<>();
        
        
        for(int i = 0 ; i < participant.length; i++){
            if(participantCounts.get(participant[i]) == null ){
                participantCounts.put(participant[i],1);    
            }else{
                participantCounts.put(participant[i], participantCounts.get(participant[i])+1);
            }
        }
        
        
        for(int i = 0 ; i < completion.length; i++){
                
            participantCounts.put(completion[i], participantCounts.get(completion[i])-1);
            
        }
        
        for(int i = 0 ; i < participant.length; i++){
            
            if(participantCounts.get(participant[i]) >= 1 ){
                answer = participant[i];
            }
                            
        }
        
        
        return answer;
    }
}