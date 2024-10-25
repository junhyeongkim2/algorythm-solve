class Solution {
    
    public String solution(int a, int b) {
        int month = a;
        int day = b;
        String answer = "";
        String[] week = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
        int[] dayOfMonth = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        month = month - 1;
        int result = 0;
        for(int i = 0; i < month; i++){
            result += dayOfMonth[i];
        }
        result = (result + day) % 7 - 1;
        if(result < 0)  result = 6;
        
        answer = week[result];
        
        return answer;
    }
}