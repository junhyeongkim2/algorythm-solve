import java.util.*;

class Solution {
    
    int [][] graph  = new int [101][101];
    
    public int spinAndGetMinValue(int [] querie){
        
        int startY = querie[0];
        int startX = querie[1];
        
        int endY = querie[2];
        int endX = querie[3];
        
        List<Integer> values = new ArrayList<>();
        
        for(int i = startX; i < endX; i++){
            values.add(graph[startY][i]);
        }
        
        for(int i = startY; i < endY; i++){
            values.add(graph[i][endX]);
        }
        
        for(int i = endX; i > startX; i--){
            values.add(graph[endY][i]);
        }
        
        for(int i = endY; i > startY; i--){
            values.add(graph[i][startX]);
        }
        
        int temp = values.get(values.size()-1);
        values.add(0,temp);
        values.remove(values.size()-1);
        
        int idx = 0;
        
        // for(int i = 0 ; i < values.size(); i++){
        //     System.out.print(values.get(i) + " ");
        // }
        // System.out.println();
        // System.out.println("...");

        
        for(int i = startX; i < endX; i++){
            graph[startY][i] = values.get(idx);
            idx++;
        }
        
        for(int i = startY; i < endY; i++){
            graph[i][endX] = values.get(idx);
            idx++;
        }
        
        for(int i = endX; i > startX; i--){
            graph[endY][i] = values.get(idx);
            idx++;
        }
        
        for(int i = endY; i > startY; i--){
            graph[i][startX] = values.get(idx);
            idx++;
        }
        
        
        return Collections.min(values);
    }
    
    public int[] solution(int rows, int columns, int[][] queries) {
        
        int value = 1;
        
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){
                graph[i][j] = value;
                value++;
                // System.out.print(graph[i][j] + " ");
            }
            // System.out.println();
        }
        // System.out.println();
        
        int[] answer = new int[queries.length];
        
        for(int i = 0 ; i < queries.length; i++){
            answer[i] = spinAndGetMinValue(queries[i]);

        }
        
        return answer;
    }
}