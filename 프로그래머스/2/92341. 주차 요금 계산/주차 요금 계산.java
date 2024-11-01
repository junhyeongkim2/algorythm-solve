import java.util.*;

class Solution {
    
    List<Car> answers = new ArrayList<>();
    Map<String,Integer> timeMap = new HashMap<>();
    Map<String,Integer> carMap = new HashMap<>();
    
    List<String> remainCars = new ArrayList<>();
    
    
    public class Car{
        
        String number;
        int totalTime;
        int cost;
        
        public Car(String number, int cost){
            this.number = number;
            this.cost = cost;
        }
        
    }
    
    public int[] solution(int[] fees, String[] records) {
        
        for(int i = 0 ; i < records.length; i++){
            
            String [] infos = records[i].split(" ");
            
            String stime = infos[0];
            String carNumber = infos[1];
            String action = infos[2];
            
            if(action.equals("IN")){
                timeMap.put(carNumber, changeToInt(stime));   
                remainCars.add(carNumber);
            }
            if(action.equals("OUT")){ 
                int departTime = changeToInt(stime) - timeMap.get(carNumber);
                carMap.put(carNumber, carMap.getOrDefault(carNumber,0) + departTime);
                
                remainCars.remove(carNumber);
            }
        }
        
        System.out.println();
        
        for(String carNumber : remainCars){
            carMap.put(carNumber, carMap.getOrDefault(carNumber,0) + changeToInt("23:59") - timeMap.get(carNumber));
        }
        
        List<String> keys = new ArrayList<>(carMap.keySet());
        Collections.sort(keys);
        
        List<Integer> costs = new ArrayList<>();
        
        for(String number : keys){
            costs.add(calculateFee(fees, carMap.get(number)));
        }
          

        return costs.stream().mapToInt(Integer::intValue).toArray();
    }
    
    public int changeToInt(String stime){
        
        String [] s = stime.split(":");
        
        String a = s[0];
        String b = s[1];
        
        return (Integer.parseInt(a) * 60) + Integer.parseInt(b);
    }
    
    public int calculateFee(int[] fees, int departTime){
        
        int feeTime = fees[0];
        
        if(departTime <= feeTime){
            return fees[1];
        }
        
        if(((departTime - feeTime) % (fees[2])) != 0){
            return fees[1] + (((departTime - feeTime) / (fees[2])) + 1) * fees[3];
        }
        
        return fees[1] + ((departTime - feeTime) / (fees[2]))  * fees[3];
        
    }
    
    
}