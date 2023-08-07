import java.util.*;

class Solution {
    public String[] solution(String[] players, String[] callings) {
        
        HashMap<String,Integer> rank = new HashMap<String,Integer>();
        
        for(int i = 0 ; i < players.length; i++){
            rank.put(players[i],i);
        }
        
        
        for(String player : callings){
            
            int nowRank = rank.get(player);
            
            // System.out.println(rank.get(players[nowRank-1]) + " " + rank.get(players[nowRank]));
            
            
            String beforePlayer = players[nowRank-1];
            
            // System.out.println(players[nowRank] + " " + beforePlayer);
            
            rank.put(players[nowRank],nowRank-1);
            rank.put(beforePlayer,nowRank);
            
            players[nowRank-1] = players[nowRank];
            players[nowRank] = beforePlayer;
            
          
        
            // System.out.println(players[nowRank-1] + " " + players[nowRank]);
            
            // System.out.println(rank.get(player));
            
            // System.out.println(rank.get(players[nowRank-1]) +  " " + rank.get(players[nowRank]));
            
        }
        
        
        
        String[] answer = players;
        return answer;
    }
}