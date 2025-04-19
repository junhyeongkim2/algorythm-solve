class Solution {
    public int solution(int[] players, int m, int k) {
        

        int curServer = 0;
        int improvedServer = 0;
        
        int [] isDisapear = new int[100];
            
        
        for(int i = 0 ; i < players.length; i++){
            
            int curPlayer = players[i];
            
            if(isDisapear[i] != 0){
                curServer -= isDisapear[i];   
            }
            
            if((curPlayer / m) > curServer ) {
                
                int needServer = (curPlayer / m) - curServer;
                
                curServer = curServer + needServer;
                
                improvedServer += needServer;
                
                isDisapear[i+k] = needServer;
            }
            
     
            
            
        }
        
        int answer = improvedServer;
        return answer;
    }
}