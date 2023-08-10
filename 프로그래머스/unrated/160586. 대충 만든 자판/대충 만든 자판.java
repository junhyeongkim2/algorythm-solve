import java.util.*;

class Solution {
    public int[] solution(String[] keymap, String[] targets) {
        
        
        HashMap<String,Integer> map = new HashMap<String,Integer>();

        
        for(int i = 0 ; i < keymap.length; i++){
            String [] temp = keymap[i].split("");
            for(int j = 0 ; j < temp.length; j++){
                if(map.get(temp[j])!=null){      
                    int minResult = Math.min(map.get(temp[j]),j+1);
                    map.put(temp[j],minResult);
                    // System.out.println("1 : "+temp[j] + " " + minResult);
                }else{
                    map.put(temp[j],j+1);
                    System.out.println("2 : "+temp[j] + " " + (j+1));
                }
            }
        }
        
        
        List<Integer> arr = new ArrayList<Integer>();
    
        for(int i = 0 ; i < targets.length; i++){
            String [] temp = targets[i].split("");
            int ans = 0;
            Boolean flag = false;
            for(int j = 0 ; j < temp.length; j++){
                if(map.get(temp[j])==null){
                    arr.add(-1);
                    flag = true;
                    break;

                }
                ans += map.get(temp[j]);
            }
            if(flag==false){
                arr.add(ans);    
            }
            
        }
    
        
        return arr.stream().mapToInt(i->i).toArray();
    }
}