import java.util.*;
class Solution {
    public int solution(int cacheSize, String[] cities) {
        if (cacheSize == 0) {
            return cities.length * 5;  // 캐시 사이즈가 0이면 모두 miss
        }
        
        LinkedList<String> cache = new LinkedList<>();
        int answer = 0;
        
        for (String city : cities) {
            city = city.toLowerCase();
            
            // cache hit
            if (cache.remove(city)) {  // 있으면 제거하고 true 반환
                cache.addLast(city);   // 가장 최근 위치로 이동
                answer += 1;
            }
            // cache miss
            else {
                if (cache.size() >= cacheSize) {
                    cache.removeFirst();  // 가장 오래된 항목 제거
                }
                cache.addLast(city);
                answer += 5;
            }
        }
        
        return answer;
    }
}