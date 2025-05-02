import java.util.*;

class Solution {
    
    List<List<Integer>> graph = new ArrayList<>();
    int[][] cost = new int[101][101];
    
    public class Node {
        int x;
        int cost;
        
        Node(int x, int cost) {
            this.x = x;
            this.cost = cost;
        }
    }
    
    public int solution(int N, int[][] road, int K) {
        // 그래프 초기화
        for(int i = 0; i < N; i++) {
            graph.add(new ArrayList<>());
        }
        
        // 도로 정보 설정
        for(int i = 0; i < road.length; i++) {
            int a = road[i][0] - 1;
            int b = road[i][1] - 1;
            int c = road[i][2];
            graph.get(a).add(b);
            graph.get(b).add(a);
            
            if(cost[a][b] == 0) {
                cost[a][b] = c;
                cost[b][a] = c;
            } else {
                cost[a][b] = Math.min(c, cost[a][b]);
                cost[b][a] = Math.min(c, cost[b][a]);
            }
        }
        
        // 각 노드까지의 최소 거리 배열
        int[] dist = new int[N];
        // 최대값으로 초기화
        Arrays.fill(dist, Integer.MAX_VALUE);
        // 시작점은 0으로 초기화
        dist[0] = 0;
        
        Queue<Node> q = new LinkedList<>();
        q.add(new Node(0, 0)); // 시작점, 비용 0
        
        while(!q.isEmpty()) {
            Node current = q.poll();
            int curNode = current.x;
            int curCost = current.cost;
            
            // 현재 비용이 이미 알려진 최소 비용보다 크면 무시
            if(curCost > dist[curNode]) continue;
            
            for(int i = 0; i < graph.get(curNode).size(); i++) {
                int nextNode = graph.get(curNode).get(i);
                int nextCost = curCost + cost[curNode][nextNode];
                
                // 새 경로가 기존보다 짧으면 업데이트하고 큐에 추가
                if(nextCost < dist[nextNode]) {
                    dist[nextNode] = nextCost;
                    q.add(new Node(nextNode, nextCost));
                }
            }
        }
        
        // K 이하 시간에 배달 가능한 마을 수 계산
        int answer = 0;
        for(int i = 0; i < N; i++) {
            if(dist[i] <= K) answer++;
        }
        
        return answer;
    }
}