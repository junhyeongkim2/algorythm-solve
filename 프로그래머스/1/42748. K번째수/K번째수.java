import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        
        List<Integer> answer = new ArrayList<>();
        
        for(int i = 0 ; i < commands.length; i++){
            List<Integer> command = new ArrayList<>();
            
            for(int j = commands[i][0] - 1 ; j <= commands[i][1] - 1; j++){
                command.add(array[j]);
            }
            
            Collections.sort(command);
            
            // System.out.println(command.toString());
            // System.out.println(command.get(commands[i][2] - 1));
            answer.add(command.get(commands[i][2] - 1));
            
            
        }
        
        return answer.stream().mapToInt(i->i).toArray();
    }
}