class Solution {
    public int solution(int n, int m, int[] section) {
        
        int answer = 0;
        int temp = 0;
        
        for(int i = 0 ; i < section.length; i++){
            
            // System.out.println(section[i] + " " + (section[i]+m-1) + " " + temp);
            
            if(temp >= section[i]){
                continue;
            }
            temp = section[i]+m-1;
            answer++;
        }
        
        return answer;
        
    }
}