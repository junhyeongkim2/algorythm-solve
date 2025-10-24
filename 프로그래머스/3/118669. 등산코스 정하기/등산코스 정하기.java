import java.util.*;

class Solution {
    static class Node implements Comparable<Node> {
        int to;
        int intensity;
        
        Node(int to, int intensity) {
            this.to = to;
            this.intensity = intensity;
        }
        
        @Override
        public int compareTo(Node other) {
            return this.intensity - other.intensity;
        }
    }
    
    public int[] solution(int n, int[][] paths, int[] gates, int[] summits) {
        // 그래프 구축
        List<List<Node>> graph = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<>());
        }
        
        for (int[] path : paths) {
            graph.get(path[0]).add(new Node(path[1], path[2]));
            graph.get(path[1]).add(new Node(path[0], path[2]));
        }
        
        // Set으로 변환 (빠른 검색)
        Set<Integer> gateSet = new HashSet<>();
        for (int gate : gates) {
            gateSet.add(gate);
        }
        
        Set<Integer> summitSet = new HashSet<>();
        for (int summit : summits) {
            summitSet.add(summit);
        }
        
        // 다익스트라: intensities[i] = i번 노드까지의 최소 intensity
        int[] intensities = new int[n + 1];
        Arrays.fill(intensities, Integer.MAX_VALUE);
        
        PriorityQueue<Node> pq = new PriorityQueue<>();
        
        // 모든 출입구를 시작점으로 (멀티 소스 다익스트라)
        for (int gate : gates) {
            intensities[gate] = 0;
            pq.offer(new Node(gate, 0));
        }
        
        while (!pq.isEmpty()) {
            Node current = pq.poll();
            int currentNode = current.to;
            int currentIntensity = current.intensity;
            
            // 이미 더 좋은 경로로 방문했으면 스킵
            if (currentIntensity > intensities[currentNode]) {
                continue;
            }
            
            // 산봉우리에 도달하면 더 이상 진행하지 않음
            if (summitSet.contains(currentNode)) {
                continue;
            }
            
            // 인접 노드 탐색
            for (Node next : graph.get(currentNode)) {
                int nextNode = next.to;
                int weight = next.intensity;
                
                // 출입구는 경유 불가 (시작점 제외)
                if (gateSet.contains(nextNode)) {
                    continue;
                }
                
                // 새로운 intensity = max(현재까지의 intensity, 현재 간선 가중치)
                int newIntensity = Math.max(currentIntensity, weight);
                
                // 더 좋은 경로를 찾았으면 갱신
                if (newIntensity < intensities[nextNode]) {
                    intensities[nextNode] = newIntensity;
                    pq.offer(new Node(nextNode, newIntensity));
                }
            }
        }
        
        // 산봉우리 중 최소 intensity 찾기
        Arrays.sort(summits); // 번호 순으로 정렬
        
        int resultSummit = Integer.MAX_VALUE;
        int resultIntensity = Integer.MAX_VALUE;
        
        for (int summit : summits) {
            if (intensities[summit] < resultIntensity) {
                resultIntensity = intensities[summit];
                resultSummit = summit;
            }
        }
        
        return new int[] {resultSummit, resultIntensity};
    }
}