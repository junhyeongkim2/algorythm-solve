import java.util.*;

class Solution {
    public int[] solution(int k, int[] score) {
        
        List<Integer> answer = new ArrayList<>();
        
        //priority queue 이용해서 k개 만큼 받기
        //priority queue 사이즈가 k개 이하이면 그냥 받는다
        //초과하면 초과한만큼 pop 해준다. 점수가 가장 작은것부터 pop 되도록 한다.
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        
        for(int i = 0 ; i < score.length; i++){
            pq.add(score[i]);
            
            if(pq.size() > k){
                pq.poll();
            }
            
            answer.add(pq.peek());
        }
        
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}