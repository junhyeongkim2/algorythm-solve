import java.util.*;

class Solution {
    public int[] solution(String[] genres, int[] plays) {
        
        //장르 순위
        HashMap<String,Integer> genreScores = new HashMap<>();
        //장루 내부 순위
        HashMap<String,HashMap<Integer,Integer>> eachScores = new HashMap<>();
        
        // 장르 순위 정렬
        
        for(int i = 0; i < genres.length; i++){
            
            if(!genreScores.containsKey(genres[i])){
                HashMap<Integer,Integer> eachScore = new HashMap<>();
                eachScore.put(i,plays[i]);
                genreScores.put(genres[i],plays[i]);
                eachScores.put(genres[i],eachScore);
            }else{
                eachScores.get(genres[i]).put(i,plays[i]);
                genreScores.put(genres[i],genreScores.get(genres[i]) + plays[i]);   
            }
            
        }
        
        
        List<String> genreKeys = new ArrayList(genreScores.keySet());
        Collections.sort(genreKeys, (c1,c2)-> genreScores.get(c2) - genreScores.get(c1) );
        
        
        
        List<Integer> answer = new ArrayList<>();
        
        for(String key : genreKeys){
            
            HashMap<Integer,Integer> scores =  eachScores.get(key);
            List<Integer> musicIndexs = new ArrayList(scores.keySet());
            
            Collections.sort(musicIndexs, (c1,c2) -> scores.get(c2) - scores.get(c1));
            
            answer.add(musicIndexs.get(0));
            
            if(musicIndexs.size()>1){
                answer.add(musicIndexs.get(1));
            }
            
            
            
            
        }
        
        // 장르 내 순위 정렬
        
        
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}