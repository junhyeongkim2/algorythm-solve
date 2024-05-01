class Solution {
    public int[] solution(int money) {
        
        
        int cups = money / 5500;
        int remain = money % 5500;
        
        
        
        int[] answer = {cups,remain};
        return answer;
        
    }
}