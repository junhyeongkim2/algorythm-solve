import java.util.*;

class Solution {
    public int[] solution(String[] wallpaper) {
        
        
        int luy = 51;
        int lux = 51;
        int rdy = 0;
        int rdx = 0;
        
        for(int i = 0 ; i < wallpaper.length; i++){
            String [] temp = wallpaper[i].split("");
            for(int j = 0 ; j < temp.length; j++){
                
                if(temp[j].equals("#")){
                    lux = Math.min(lux,j);
                    luy = Math.min(luy,i);
                    rdy = Math.max(rdy,i);
                    rdx = Math.max(rdx,j);
                }
                // System.out.print(temp[j]);
            }
            // System.out.println("");
        }
        
        
//         System.out.println(lux + " " + luy);
//         System.out.println(rdx + " " + rdy);
        
        
        
        int[] answer = {luy,lux,rdy+1,rdx+1};
        return answer;
    }
}