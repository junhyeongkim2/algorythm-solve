import java.util.*;

class Solution {
    
    List<List<Integer>> graph = new ArrayList<>();
    int [] visit = new int[100001];
    int [] depth = new int[100001];
    
    public class Point{
        int node;
        int depth;
        
        Point(int node, int depth){
            this.node = node;
            this.depth = depth;
        }
        
    }
    
    
    public void bfs(int start){
        Queue<Point> q = new LinkedList<>();
        q.add(new Point(start,0));
        visit[start] = 1;
        
        while(!q.isEmpty()){
            Point current = q.poll();
            
            
            for(int i = 0 ; i < graph.get(current.node).size(); i++){
                
                if(visit[graph.get(current.node).get(i)] == 0){
                    visit[graph.get(current.node).get(i)] = 1;
                    depth[graph.get(current.node).get(i)] = current.depth + 1;
                    q.add(new Point(graph.get(current.node).get(i), current.depth + 1));
                }
                
            }
            
        }
        
        
        
    }
    
    public int[] solution(int n, int[][] roads, int[] sources, int destination) {
        
        for(int i = 0 ; i <= n; i++){
            graph.add(new ArrayList<>());
        }
        
        for(int i = 0 ; i < roads.length; i++){
            int start = roads[i][0];
            int end = roads[i][1];
            graph.get(start).add(end);
            graph.get(end).add(start);
        }
        
        
        for(int i = 0 ; i < 100001; i++){
            depth[i] = -1;
        }
        
        depth[destination] = 0;
        
        bfs(destination);
        
        int[] answer = new int[sources.length];
        
        for(int i = 0 ; i < sources.length; i++){
            
            answer[i] = depth[sources[i]];
        }
        
        
        return answer;
    }
}