import java.util.*;


class Solution {
    
    static int [][] dxy = {{0,1},{1,0},{-1,0},{0,-1}};
    
    public int solution(int[][] maps) {

        int answer = 0;
        int [][] visited = new int[maps.length][maps[0].length];
        bfs(maps,visited);
        
        answer = visited[maps.length-1][maps[0].length-1];
    
        if(answer==0){
            answer=-1;
        }
    

        return answer;
    }
    
    void bfs(int [][] maps, int[][] visited){
        int x= 0;
        int y =0;
        visited[y][x]=1;
        Queue<int[]> q = new LinkedList<>();
        q.add(new int[]{y,x});
        
    
        while(!q.isEmpty()){
            int [] nxy = q.peek();
            int dx = nxy[1];
            int dy = nxy[0];
            q.remove();
            for(int i = 0 ; i < 4; i++){
                int nx = dx + dxy[i][0];
                int ny = dy + dxy[i][1];
                // System.out.println(ny + " " + nx );

                if(nx>=0&&ny>=0&&nx<maps[0].length&&ny<maps.length&&maps[ny][nx]==1&&visited[ny][nx]==0){
                    visited[ny][nx] = visited[dy][dx]+1;
                    q.add(new int[]{ny,nx});
                } 
            }
        }
    }
    
}