import java.util.*;

class Solution {
    public String solution(int n) {
        StringBuilder answer = new StringBuilder();
        
        while (n > 0) {
            int remainder = n % 3;  // 3으로 나눈 나머지
            n = n / 3;              // 3으로 나눈 몫
            
            // 핵심 처리 부분
            if (remainder == 0) {
                answer.insert(0, "4");  // 나머지가 0이면 4를 추가
                n--;                    // 몫에서 1을 빼줌
            } else {
                answer.insert(0, remainder);  // 나머지가 1이나 2면 그대로 추가
            }
        }
        
        return answer.toString();
    }
}