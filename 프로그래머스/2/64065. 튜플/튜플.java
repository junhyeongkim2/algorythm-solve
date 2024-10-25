import java.util.*;

class Solution {
    public int[] solution(String s) {
        
        
        List<Integer> answer = new ArrayList<>();
        
        String ss = s.substring(2, s.length());
        ss = ss.substring(0, ss.length()-2);
        ss = ss.replace("},{", "-");
        
        String [] sList = ss.split("-");
        
        Arrays.sort(sList, (o1,o2)-> o1.length() - o2.length());
        
        
        for(String tuple : sList){
            String [] values =  tuple.split(",");
            
            for(int i = 0 ; i < values.length; i++){
                if(!answer.contains(Integer.parseInt(values[i]))){
                    answer.add(Integer.parseInt(values[i]));
                }
            }
            
        }
                
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}