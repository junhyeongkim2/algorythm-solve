import java.util.*;

class Solution {
    public int[] solution(int[][] edges) {
        
        Map<Integer, int[]> nodeCnt = new HashMap<>();
        int[] answer = {0,0,0,0};
        
        Arrays.stream(edges).forEach(edge->{
            
            int a = edge[0];
            int b = edge[1];
            
            if(!nodeCnt.containsKey(a)){
                nodeCnt.put(a,new int[] {0,0});
            }
            if(!nodeCnt.containsKey(b)){
                nodeCnt.put(b,new int[] {0,0});
            }
            
            nodeCnt.get(a)[0] += 1;
            nodeCnt.get(b)[1] += 1;
             
        });
        
        int [] cnts;
        for(int key:nodeCnt.keySet()){
            
            cnts = nodeCnt.get(key);
            
            if(cnts[0] >= 2 && cnts[1] == 0){
                answer[0] = key;
            }else if(cnts[0] == 0 && cnts[1] > 0){
                answer[2]++;
            }else if(cnts[0]>=2 && cnts[1]>=2){
                answer[3]++;
            }
            

        }
        
        answer[1] = nodeCnt.get(answer[0])[0] - answer[2] - answer[3];
        
        
        
        
        return answer;
    }
}