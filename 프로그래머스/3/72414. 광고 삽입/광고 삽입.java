import java.util.*;

class Solution {
    public String solution(String play_time, String adv_time, String[] logs) {
        int playTime = toIntTime(play_time);
        int advTime = toIntTime(adv_time);
        
        // 1. 시청자 수 배열 생성
        long[] times = new long[360_000];
        
        // 2. 시작과 종료 시간에 +1, -1 표시
        for(String log : logs) {
            String[] split = log.split("-");
            int start = toIntTime(split[0]);
            int end = toIntTime(split[1]);
            times[start]++;    // 시작 시간에 +1
            times[end]--;      // 종료 시간에 -1
        }
        
        // 3. 누적합 계산
        // 각 시간별 시청자 수로 변환
        for(int i = 1; i < playTime; i++) {
            times[i] += times[i-1];
        }
        
        // 4. 한번 더 누적합 계산
        // 구간 합을 쉽게 구하기 위한 누적 시청 시간
        for(int i = 1; i < playTime; i++) {
            times[i] += times[i-1];
        }
        
        // 5. 가장 시청시간이 긴 구간 찾기
        long maxTime = times[advTime-1];
        int maxIdx = 0;
        
        for(int i = advTime; i < playTime; i++) {
            long totalTime = times[i] - times[i-advTime];
            
            if(totalTime > maxTime) {
                maxTime = totalTime;
                maxIdx = i - advTime + 1;
            }
        }
        
        return toStrTime(maxIdx);
    }
    
    private int toIntTime(String strTime) {
        String[] split = strTime.split(":");
        return Integer.parseInt(split[0]) * 3600 + 
               Integer.parseInt(split[1]) * 60 + 
               Integer.parseInt(split[2]);
    }
    
    private String toStrTime(int time) {
        int hour = time / 3600;
        int minute = (time % 3600) / 60;
        int second = time % 60;
        return String.format("%02d:%02d:%02d", hour, minute, second);
    }
}