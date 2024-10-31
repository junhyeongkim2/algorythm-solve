import java.util.*;

class Solution {
    public int solution(String str1, String str2) {
        // 각 문자열의 다중집합을 저장할 Map
        Map<String, Integer> map1 = new HashMap<>();
        Map<String, Integer> map2 = new HashMap<>();
        
        // 다중집합 생성
        makeMultiSet(str1.toLowerCase(), map1);
        makeMultiSet(str2.toLowerCase(), map2);
        
        // 둘 다 공집합인 경우
        if(map1.isEmpty() && map2.isEmpty()) {
            return 65536;
        }
        
        // 교집합과 합집합 계산
        int intersection = 0;
        int union = 0;
        
        // 모든 키에 대해 교집합과 합집합 계산
        Set<String> keys = new HashSet<>();
        keys.addAll(map1.keySet());
        keys.addAll(map2.keySet());
        
        for(String key : keys) {
            int count1 = map1.getOrDefault(key, 0);
            int count2 = map2.getOrDefault(key, 0);
            
            intersection += Math.min(count1, count2);
            union += Math.max(count1, count2);
        }
        
        // 자카드 유사도 계산
        double similarity = (double)intersection / union;
        return (int)(similarity * 65536);
    }
    
    private void makeMultiSet(String str, Map<String, Integer> map) {
        for(int i = 0; i < str.length() - 1; i++) {
            char first = str.charAt(i);
            char second = str.charAt(i + 1);
            
            // 영문자만 유효
            if(!Character.isLetter(first) || !Character.isLetter(second)) {
                continue;
            }
            
            String element = str.substring(i, i + 2);
            map.put(element, map.getOrDefault(element, 0) + 1);
        }
    }
}