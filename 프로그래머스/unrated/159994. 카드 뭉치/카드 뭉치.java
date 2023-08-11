class Solution {
    public String solution(String[] cards1, String[] cards2, String[] goal) {
        
        
        int card1=0;
        int card2=0;
        int cnt=0;
        
        for(int i = 0 ; i < goal.length; i++){
            
            if(card1<cards1.length){
                if(goal[i].equals(cards1[card1])){
                    card1++;
                    cnt++;
                    continue;
                }
            }
            
            if(card2<cards2.length){
                if(goal[i].equals(cards2[card2])){
                    card2++;
                    cnt++;
                    continue;
                }
            }
            

            
            return "No";
            
        }
        
        String answer = "";
        if(cnt == goal.length){
            answer = "Yes";
        }
        
        return answer;
        
        
        
        
    }
}