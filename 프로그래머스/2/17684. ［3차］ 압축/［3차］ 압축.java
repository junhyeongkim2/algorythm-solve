import java.util.*;

class Solution {
    
    Map<String,Integer> dict = new HashMap<>();
    
    public void makeDict(){
        
        dict.put("A",1);
        dict.put("B",2);
        dict.put("C",3);
        dict.put("D",4);
        dict.put("E",5);
        dict.put("F",6);
        dict.put("G",7);
        dict.put("H",8);
        dict.put("I",9);
        dict.put("J",10);
        dict.put("K",11);
        dict.put("L",12);
        dict.put("M",13);
        dict.put("N",14);
        dict.put("O",15);
        dict.put("P",16);
        dict.put("Q",17);
        dict.put("R",18);
        dict.put("S",19);
        dict.put("T",20);
        dict.put("U",21);
        dict.put("V",22);
        dict.put("W",23);
        dict.put("X",24);
        dict.put("Y",25);
        dict.put("Z",26);
        
    }
    
    
    
    public int[] solution(String msg) {
        
        
        makeDict();
        
        List<Integer> answers = new ArrayList<>();

           
        for(int i = 0 ; i < msg.length(); i++){
            for(int j = msg.length(); j > i; j--){
                
                if(dict.get(msg.substring(i,j)) != null){
                    System.out.println(dict.get(msg.substring(i,j)) + " " + msg.substring(i,j) + " / " + (j < msg.length() ? msg.substring(i,j)+msg.charAt(j) : "overed") );
                    
                    answers.add(dict.get(msg.substring(i,j)));

                    if(j < msg.length()) {
                        dict.put(msg.substring(i,j)+msg.charAt(j), dict.keySet().size()+1);  
                    }
                    
                    i += msg.substring(i,j).length()-1;
                    
                    break;
                }
                       
            }
        }
        
        return answers.stream().mapToInt(Integer::intValue).toArray();
    }
}