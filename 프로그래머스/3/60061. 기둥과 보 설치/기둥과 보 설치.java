import java.util.*;
class Solution {
   boolean[][][] graph; // [y][x][type] type: 0은 기둥, 1은 보
   int n;
   
   public int[][] solution(int n, int[][] build_frame) {
       this.n = n;
       graph = new boolean[n+1][n+1][2];
       
       for (int[] frame : build_frame) {
           int x = frame[0];
           int y = frame[1];
           int type = frame[2]; 
           int cmd = frame[3];  // 0: 삭제, 1: 설치
           
           if (cmd == 1) {
               if (canBuild(x, y, type)) {
                   graph[y][x][type] = true;
               }
           } else {
               graph[y][x][type] = false;
               if (!isValid()) {
                   graph[y][x][type] = true;
               }
           }
       }
       
       return getResult();
   }
   
   private boolean canBuild(int x, int y, int type) {
       if (type == 0) { // 기둥
           return y == 0 || 
                  (x > 0 && graph[y][x-1][1]) || 
                  graph[y][x][1] || 
                  (y > 0 && graph[y-1][x][0]);
       } else { // 보
           return (y > 0 && graph[y-1][x][0]) || 
                  (y > 0 && graph[y-1][x+1][0]) || 
                  (x > 0 && x < n && graph[y][x-1][1] && graph[y][x+1][1]);
       }
   }
   
   private boolean isValid() {
       for (int x = 0; x <= n; x++) {
           for (int y = 0; y <= n; y++) {
               for (int type = 0; type < 2; type++) {
                   if (graph[y][x][type] && !canBuild(x, y, type)) {
                       return false;
                   }
               }
           }
       }
       return true;
   }
   
   private int[][] getResult() {
       List<int[]> result = new ArrayList<>();
       for (int x = 0; x <= n; x++) {
           for (int y = 0; y <= n; y++) {
               for (int type = 0; type < 2; type++) {
                   if (graph[y][x][type]) {
                       result.add(new int[]{x, y, type});
                   }
               }
           }
       }
       
       Collections.sort(result, (a, b) -> {
           if (a[0] != b[0]) return a[0] - b[0];
           if (a[1] != b[1]) return a[1] - b[1];
           return a[2] - b[2];
       });
       
       return result.toArray(new int[0][]);
   }
}