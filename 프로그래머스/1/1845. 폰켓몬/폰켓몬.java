import java.util.*;

class Solution {
    public int solution(int[] nums) {
        
        int numsCount = 0;
        
        Map<Integer,Integer> numsMap = new HashMap<>();
        
        for(int i = 0 ; i < nums.length; i++){
            if ( numsMap.get(nums[i]) == null) {
                numsCount++;
                numsMap.put(nums[i],1);
            }else{
                numsMap.put(nums[i],numsMap.get(nums[i])+1);
            }
        }
        
        int answer = 0;
        if(numsCount < nums.length/2){
            answer = numsCount;
        }else{
            answer = nums.length/2;
        }
        
        return answer;
    }
}