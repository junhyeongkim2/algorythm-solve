import java.util.*;

class Solution {
    
    int [][] visited = new int [101][101];
    int [][] graph = new int [101][101];
    int totalFood = 0;
    
    int [] dy = {1,-1,0,0};
    int [] dx = {0,0,-1,1};
    
    int mapWidth = 0;
    int mapHeight = 0;
    
    
    public void dfs(int y, int x){
    
        for(int i = 0 ; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny >= 0 && ny < mapHeight && nx >= 0 && nx < mapWidth && visited[ny][nx] == 0 && graph[ny][nx] > 0){

                visited[ny][nx] = 1;
                totalFood+=graph[ny][nx];
                dfs(ny,nx);
                

                
            }
        }
    }
        
    public int[] solution(String[] maps) {
        
        mapHeight = maps.length;
        mapWidth = maps[0].length();
                
        List<Integer> answers = new ArrayList<>();
        
        for(int i = 0 ; i < maps.length; i++){
            for(int j = 0; j < maps[0].length(); j++){
                if(maps[i].charAt(j) == 'X'){
                    graph[i][j] = 0;
                }else{
                    graph[i][j] = maps[i].charAt(j) - '0';    
                }
            }
        }
        
        
        for(int i = 0 ; i < maps.length; i++){
            for(int j = 0; j < maps[0].length(); j++){
                
                if(visited[i][j] == 0 && graph[i][j] > 0){
                    totalFood+=graph[i][j];
                    visited[i][j] = 1;
                    dfs(i,j);
                    answers.add(totalFood);
                    totalFood = 0;
                }
                
            }
        }
        
        
        if(answers.size()==0){
            answers.add(-1);
        }
        
        int[] answer = answers.stream().mapToInt(i->i).toArray();
        
        Arrays.sort(answer);
        
        
        return answer;
    }
}