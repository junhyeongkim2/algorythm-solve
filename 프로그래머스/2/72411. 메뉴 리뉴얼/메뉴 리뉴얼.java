import java.util.*;
import java.util.stream.Collectors;


class Solution {
    
    Map<String,Integer> combination = new HashMap<>();
    
    boolean [] visited = new boolean[11];
    
    public void dfs(String order, String comb, int depth){

        if(comb.length()>=2){            
            char[] chars = comb.toCharArray();
            Arrays.sort(chars);
            String sortedComb = new String(chars);
            combination.put(sortedComb, combination.getOrDefault(sortedComb,0)+1);        
        }
        
        for(int i = depth; i < order.length(); i++){
            
            dfs(order,comb + order.charAt(i), i + 1);
            
        }
        
        
    }
    
    public String[] solution(String[] orders, int[] course) {
        
        // 10! * 20 = 100 * 20 = 1억 이하
        //모든 조합 구한다.
        //각 조합별로 카운트를 한다.map으로
        //코스 종류별로 가장 많이나온 메뉴 구성을 반환한다.
        //사전순으로 정렬한다. 
        
        Arrays.sort(orders);
        
        for(int i = 0 ; i < orders.length; i++){
            dfs(orders[i], "", 0);
        }
        
        

        List<String> keySet = new ArrayList<>(combination.keySet());
    
        
        keySet.sort((o1, o2) -> combination.get(o2).compareTo(combination.get(o1)));
        
        List<String> temp = new ArrayList<>();
        
        Map<Integer,Integer> flags = new HashMap<>();
        
        for(String key : keySet){
            
            if(flags.getOrDefault(key.length(),0) < combination.get(key)){
                
                flags.put(key.length(), combination.get(key));
                
            }
            
            
            
            if(flags.getOrDefault(key.length(),0) == 0){
                temp.add(key);
            }
            
            if(flags.getOrDefault(key.length(),0) > 0 && flags.get(key.length()) == combination.get(key)){
                temp.add(key);
            }
                
            
            // System.out.println(key + " " + combination.get(key));
        }
        
        
        List<Integer> courseList = Arrays.stream(course).boxed().collect(Collectors.toList());

        
        List<String> answer = new ArrayList<>();
        
        for(int i = 0 ; i < temp.size(); i++){
            if( courseList.contains(temp.get(i).length()) && combination.get(temp.get(i)) >= 2){
                // System.out.println(temp.get(i));
                answer.add(temp.get(i));
            }
        }
        
        Collections.sort(answer);

                
        
        String[] finalAnswer = new String[answer.size()];
        
        for(int i = 0 ; i < answer.size(); i++){
            finalAnswer[i] = answer.get(i);
        }
        
        return finalAnswer;
    }
}