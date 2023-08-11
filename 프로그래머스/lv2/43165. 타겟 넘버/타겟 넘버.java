class Solution {
    static int answer = 0;

    public int solution(int[] numbers, int target) {
        dfs(numbers,0,0,target);
        return answer;
    }
    
    void dfs(int [] numbers, int index, int sum, int target){
        // System.out.println(sum + " " + index);
        
        if(sum == target && index == numbers.length){
            answer++;
            return;
        }
        
        
        if(index < numbers.length){

            dfs(numbers, index+1, sum+numbers[index], target);
            dfs(numbers, index+1, sum-numbers[index], target);  

        }
    
    }
    
}