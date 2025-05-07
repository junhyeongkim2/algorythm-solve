import java.util.*;

class Solution {
    
    public class Music {
        String title;
        int playTime;
        int order;
        
        public Music(String title, int playTime, int order) {
            this.title = title;
            this.playTime = playTime;
            this.order = order;
        }
    }
    
    // 시간 계산
    public int getPlayTime(String start, String end) {
        int startHour = Integer.parseInt(start.substring(0, 2));
        int startMin = Integer.parseInt(start.substring(3));
        int endHour = Integer.parseInt(end.substring(0, 2));
        int endMin = Integer.parseInt(end.substring(3));
        
        return (endHour - startHour) * 60 + (endMin - startMin);
    }
    
    // 음표 전처리 (#처리)
    public String preprocessMelody(String melody) {
        return melody.replaceAll("C#", "c")
                    .replaceAll("D#", "d")
                    .replaceAll("F#", "f")
                    .replaceAll("G#", "g")
                    .replaceAll("A#", "a")
                    .replaceAll("B#", "b");
    }
    
    // 실제 재생된 멜로디 생성
    public String getPlayedMelody(String melody, int playTime) {
        StringBuilder sb = new StringBuilder();
        int len = melody.length();
        
        // 재생 시간만큼 멜로디 반복
        for (int i = 0; i < playTime; i++) {
            sb.append(melody.charAt(i % len));
        }
        
        return sb.toString();
    }
    
    public String solution(String m, String[] musicinfos) {
        String processedM = preprocessMelody(m);
        List<Music> matches = new ArrayList<>();
        
        for (int i = 0; i < musicinfos.length; i++) {
            String[] info = musicinfos[i].split(",");
            String start = info[0];
            String end = info[1];
            String title = info[2];
            String melody = info[3];
            
            int playTime = getPlayTime(start, end);
            String processedMelody = preprocessMelody(melody);
            String playedMelody = getPlayedMelody(processedMelody, playTime);
            
            // 기억한 멜로디가 재생된 멜로디에 포함되는지 확인
            if (playedMelody.contains(processedM)) {
                matches.add(new Music(title, playTime, i));
            }
        }
        
        if (matches.isEmpty()) {
            return "(None)";
        }
        
        // 재생 시간이 긴 순, 같으면 입력 순으로 정렬
        Collections.sort(matches, (a, b) -> {
            if (a.playTime == b.playTime) {
                return a.order - b.order;
            }
            return b.playTime - a.playTime;
        });
        
        return matches.get(0).title;
    }
}