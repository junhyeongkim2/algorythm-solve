class Solution {
    public int solution(int[] numbers) {
        
        int [] visit = new int[10];
        int answer = 0;
        
        
        for(int i = 0 ; i < numbers.length; i++){
            visit[numbers[i]] = 1;
        }
        

        
        for(int i = 1 ; i <= 9; i++){
            
            if(visit[i]==0){
                answer+=i;
            }

        }
        
        
    
        return answer;
    }
}