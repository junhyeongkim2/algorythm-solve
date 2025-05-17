import java.util.*;

class Solution {
    public int solution(int[][] data, int col, int row_begin, int row_end) {
        
        List<Integer> values = new ArrayList<>();
        
        Arrays.sort(data, (a1,a2)->{
            if(a1[col-1] == a2[col-1]){
                return a2[0] - a1[0];
            }
            return a1[col-1] - a2[col-1];
        });
        
        
        for(int i = row_begin-1; i <= row_end-1; i++){
            int value = 0;
            for(int j = 0 ; j < data[i].length; j++){
                value += data[i][j] % (i+1);
                // System.out.println(data[i][j] + " % " + (i+1));
            }
            values.add(value);
            // System.out.println(value);
        }
        
        int answer = values.get(0);
        
        for(int i = 1 ; i < values.size(); i++){
            answer ^= values.get(i);
        }
        
        
        return answer;
    }
}