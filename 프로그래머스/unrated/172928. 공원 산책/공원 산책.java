class Solution {
    public int[] solution(String[] park, String[] routes) {
        
        
        int starty = 0;
        int startx = 0;
        int parkScale=0;
    
        
        String[][] graph = new String[park.length][park[0].length()];
        
        for(int i = 0 ; i < park.length; i++){
            String [] temp = park[i].split("");
            parkScale = temp.length;
            for(int j = 0 ; j < temp.length; j++){
                graph[i][j]=temp[j];
                if(temp[j].equals("S")){
                    starty = i;
                    startx = j;
                }
            }
        }
        
        

        
        
        
        int tempy = starty;
        int tempx = startx;
        
        
        for(int i = 0 ; i < routes.length; i++){
            
            String [] way = routes[i].split(" ");
            // System.out.println(way[0] + " " + way[1]);
            
            for(int j = 0 ; j < Integer.parseInt(way[1]); j++){
                   
            if(way[0].equals("E")){
                tempx++;
                
            }else if(way[0].equals("W")){
                tempx--;
                
            }else if(way[0].equals("S")){
                tempy++;
                
            }else if(way[0].equals("N")){
                tempy--;
            }
            
            // System.out.println(tempy + " " + tempx);
            
            if(tempx < 0 || tempy < 0 || tempx >= parkScale || tempy >= parkScale){
                tempy = starty;
                tempx = startx;
                break;
            }
            
            if(graph[tempy][tempx].equals("X") ){
                tempy = starty;
                tempx = startx;
                break;
            }
            
            }
            starty = tempy;
            startx = tempx;
            
         
            
            
            
        }
        
        int[] answer = {starty,startx};
        return answer;
    }
}