import java.util.*;

class Solution {
    public int[] solution(String[] gems) {
        // 보석의 총 종류 수를 계산
        Set<String> gemTypes = new HashSet<>(Arrays.asList(gems));
        int totalGemTypes = gemTypes.size();
        
        // 각 보석 종류별 개수를 저장할 맵
        Map<String, Integer> gemCount = new HashMap<>();
        
        int start = 0;
        int end = 0;
        
        // 결과 변수: [시작 인덱스, 끝 인덱스, 구간 길이]
        int[] result = {1, gems.length, gems.length};
        
        while (end < gems.length) {
            // 현재 보석을 맵에 추가
            gemCount.put(gems[end], gemCount.getOrDefault(gems[end], 0) + 1);
            
            // 모든 종류의 보석이 포함될 때까지 end 포인터 이동
            while (gemCount.size() < totalGemTypes && end < gems.length - 1) {
                end++;
                gemCount.put(gems[end], gemCount.getOrDefault(gems[end], 0) + 1);
            }
            
            // 모든 종류의 보석이 포함되었다면
            if (gemCount.size() == totalGemTypes) {
                // start 포인터를 가능한 멀리 이동
                while (gemCount.size() == totalGemTypes) {
                    // 해당 보석의 개수가 1개 이상이면 start 포인터 이동 가능
                    if (gemCount.get(gems[start]) > 1) {
                        gemCount.put(gems[start], gemCount.get(gems[start]) - 1);
                        start++;
                    } else {
                        // 해당 보석이 1개만 남았다면 더 이상 start 포인터를 이동할 수 없음
                        break;
                    }
                }
                
                // 현재 구간이 이전에 찾은 최소 구간보다 짧다면 업데이트
                int currentLength = end - start + 1;
                if (currentLength < result[2]) {
                    result[0] = start + 1; // 문제에서는 1부터 시작
                    result[1] = end + 1;   // 문제에서는 1부터 시작
                    result[2] = currentLength;
                }
                
                // start 포인터를 한 칸 이동하여 다음 가능한 구간 탐색
                gemCount.put(gems[start], gemCount.get(gems[start]) - 1);
                if (gemCount.get(gems[start]) == 0) {
                    gemCount.remove(gems[start]);
                }
                start++;
            }
            
            end++;
        }
        
        // 결과 반환 (시작 진열대 번호, 끝 진열대 번호)
        return new int[]{result[0], result[1]};
    }
}