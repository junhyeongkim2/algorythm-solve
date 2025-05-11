import java.util.*;

class Solution {
    
    public boolean isPossibleAcrossBridge(int [] stones, int mid, int k){
        int cnt = 0;
        int maxZero = 0;
        
        for(int i = 0 ; i < stones.length; i++){    
            if(stones[i] - mid < 0){
                cnt++;
                maxZero = Math.max(maxZero, cnt);
            }else{
                cnt = 0;
            }
            // System.out.print(stones[i] - mid + " ");
        }
        // System.out.println();
        
        if(maxZero < k){
            return true;
        }
        
        return false;
    }
    
    
    public int solution(int[] stones, int k) {
        
        //이분 탐색을 통해서 건널 수 있는 친구들의 수를 업다운 시킴
        //먼저 가장 가운데에서 하나 선택함
        //해당하는 친구들의 수로 징검다리의 개수를 하나씩 빼버리고 연속으로 0이 되는 숫자를 계산함
        //k를 넘으면 false, 넘지 않으면 true
        //반복해서 최종적으로 가능한 친구들의 수를 계산한다.
        
        int start = 1;
        int end = 200000000;
        int answer = 0;
        
        while(start <= end){
            int mid = (end + start) / 2; 
            // System.out.println(mid);
            
            if(isPossibleAcrossBridge(stones, mid, k)){
                start = mid + 1;
                answer = Math.max(mid,answer);
            }else{
                end = mid - 1;
            }
            
        }
        
        return answer;
    }
}