class Solution {
    public int solution(int[] nums) {
        
        int [] arr = new int [200001];
        
    
        for(int i = 0 ; i < nums.length; i++){
            arr[nums[i]]=1;
        }
        
        int ans = 0;
        for(int i = 0 ; i < 200001; i++){
            if(arr[i]==1){
                ans++;
            }
        }
        
        int answer = 0;

        if(ans <= (nums.length/2)){
            answer = ans;
        }else if( ans > (nums.length/2)){
            answer = (nums.length / 2);
        }
        
        
        
        return answer;
        
    }
}