class Solution {
    
    final int INF = 99999999;
    int[][] dist;
    int n;
    
    public int solution(int n, int[][] results) {
        
        dist = new int [n+1][n+1];
    
        
        for(int i = 0 ; i < results.length; i++){
            dist[results[i][0]][results[i][1]] = 1;
            dist[results[i][1]][results[i][0]] = -1;
        }
        
        
        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                                        
                    if(dist[i][k] == 1 && dist[k][j] == 1){
                        dist[i][j] = 1;
                        dist[j][i] = -1;
                    }
                    
                    if(dist[i][k] == -1 && dist[k][j] == -1){
                        dist[i][j] = -1;
                        dist[j][i] = 1;
                    }
                    
                    
                    
                    
                }
            }
        }
        
        int answer = 0;
        
        
        
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                System.out.print(dist[i][j]+" ");
            }
            System.out.println();
        }

        for(int i = 1 ; i <= n ; i++){
            int cnt = 0;
            for(int j = 1 ; j <= n ; j++){
                if(dist[i][j] != 0){
                    cnt++;
                }
            }
            if(cnt == n - 1){
                answer++;
            }
        }
        
        
        return answer;
    }
}