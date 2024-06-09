class Solution {
    public int solution(long num) {
        
          int answer = 0;
        long nm = num;
        if(nm == 1){
            return 0;
        }
        while(true){
            if(nm % 2 == 0){
                nm = nm / 2;
                answer = answer + 1; 
            }else if(nm % 2 != 0){
                nm = nm * 3 + 1;
                answer = answer + 1;
            }
            if(nm == 1){
                break;
                }else if(answer == 500){
                    answer = -1;
                    break;
                }
        }
        return answer;
        
    }
}