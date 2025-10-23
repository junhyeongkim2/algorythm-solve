import java.util.*;

class Solution {
 public int solution(String[] words) {
        // Long 해시값으로 prefix 저장 (String보다 메모리 3배 절약)
        Map<Long, Integer> prefixCount = new HashMap<>();
        
        for (String word : words) {
            long hash = 0;
            for (char c : word.toCharArray()) {
                hash = hash * 31 + c;  // 31은 소수, 좋은 해시 분산
                prefixCount.put(hash, prefixCount.getOrDefault(hash, 0) + 1);
            }
        }
        
        int totalCount = 0;
        
        for (String word : words) {
            long hash = 0;
            int inputCount = word.length();
            
            for (int i = 0; i < word.length(); i++) {
                hash = hash * 31 + word.charAt(i);
                
                if (prefixCount.get(hash) == 1) {
                    inputCount = i + 1;
                    break;
                }
            }
            
            totalCount += inputCount;
        }
        
        return totalCount;
    }
}