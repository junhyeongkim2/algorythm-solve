import java.util.*;
 
class Solution {
    
    int startX;
    int startY;
    
    int exitX;
    int exitY;
    
    int reStartX;
    int reStartY;
    
    int lX;
    int lY;
    
    int []dx = {-1,0,1,0};
    int []dy = {0,1,0,-1};
    
    public class Location{
        int x;
        int y;
        int depth;
        
        Location(int x, int y, int depth){
            this.x = x;
            this.y = y;
            this.depth = depth;
        }
    }
    
    
    public void setSEL(String[] maps){
        for(int i = 0 ; i < maps.length; i++){
            for(int j = 0 ; j < maps[i].length(); j++){
                
                if(maps[i].charAt(j) == 'S'){
                    startX = j;
                    startY = i;
                }
                
                if(maps[i].charAt(j) == 'E'){
                    exitX = j;
                    exitY = i;
                }
                
                if(maps[i].charAt(j) == 'L'){
                    lX = j;
                    lY = i;
                }
            }
        }
    }
    
    public int bfsToL(String[] maps, int[][] visited){
        
        Queue<Location> q = new LinkedList<>();
        q.add(new Location(startX,startY,0));
        visited[startY][startX] = 1;

        
        while(!q.isEmpty()){
            Location curLocation = q.poll();
            int cx = curLocation.x;
            int cy = curLocation.y;
            int cDepth = curLocation.depth;
            
            if(maps[cy].charAt(cx) == 'L'){
                reStartX = cx;
                reStartY = cy;
                return cDepth;
            }
            
            for(int i = 0 ; i < 4; i++){
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                
                if( ny >= 0 && ny < maps.length && nx >= 0 && nx < maps[0].length() && maps[ny].charAt(nx) != 'X' && visited[ny][nx] == 0){
                    q.add(new Location(nx,ny,cDepth+1));
                    visited[ny][nx] = 1;

                }
            }
            
        }
        return -1;   
    }
    
    public int bfsToE(String[] maps, int[][] visited){
        
        Queue<Location> q = new LinkedList<>();
        q.add(new Location(reStartX,reStartY,0));
        visited[reStartY][reStartX] = 1;
        
        while(!q.isEmpty()){
            Location curLocation = q.poll();
            int cx = curLocation.x;
            int cy = curLocation.y;
            int cDepth = curLocation.depth;
            
            
            if(maps[cy].charAt(cx) == 'E'){
                return cDepth;
            }
            
            for(int i = 0 ; i < 4; i++){
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                
                if( ny >= 0 && ny < maps.length && nx >= 0 && nx < maps[0].length() && maps[ny].charAt(nx) != 'X' && visited[ny][nx] == 0){
                    q.add(new Location(nx,ny,cDepth+1));
                    visited[ny][nx] = 1;
                }
            }
            
        }
        return -1;   
    }
    
    
    
    public int solution(String[] maps) {
        //최단경로 2번 돌리기 bfs

        int secondToL = 0;
        int secondToE = 0;
        int [][] visited1 = new int[101][101];
        int [][] visited2 = new int[101][101];
        
        setSEL(maps);
        
        secondToL = bfsToL(maps,visited1);
        
        if(secondToL == -1){
            return -1;
        }
        
        secondToE = bfsToE(maps,visited2);
        
        // System.out.print(secondToL + " " + secondToE);
        
        if(secondToE == -1){
            return -1;
        }
        
        int answer = secondToL + secondToE;
        return answer;
    }
}