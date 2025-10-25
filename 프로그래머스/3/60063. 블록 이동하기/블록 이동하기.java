import java.util.*;

class Solution {
    
    static class Robot {
        int r1, c1, r2, c2, time;
        
        Robot(int r1, int c1, int r2, int c2, int time) {
            this.r1 = r1;
            this.c1 = c1;
            this.r2 = r2;
            this.c2 = c2;
            this.time = time;
        }
        
        String getKey() {
            return r1 + "," + c1 + "," + r2 + "," + c2;
        }
    }
    
    public int solution(int[][] board) {
        int N = board.length;
        
        Queue<Robot> q = new LinkedList<>();
        Set<String> visited = new HashSet<>();
        
        // 시작: (0,0), (0,1)
        q.offer(new Robot(0, 0, 0, 1, 0));
        visited.add("0,0,0,1");
        
        int[] dr = {-1, 1, 0, 0};
        int[] dc = {0, 0, -1, 1};
        
        while(!q.isEmpty()) {
            Robot cur = q.poll();
            
            // 목적지 도착
            if((cur.r1 == N-1 && cur.c1 == N-1) || (cur.r2 == N-1 && cur.c2 == N-1)) {
                return cur.time;
            }
            
            // 1. 상하좌우 이동
            for(int i = 0; i < 4; i++) {
                int nr1 = cur.r1 + dr[i];
                int nc1 = cur.c1 + dc[i];
                int nr2 = cur.r2 + dr[i];
                int nc2 = cur.c2 + dc[i];
                
                if(isValid(board, N, nr1, nc1) && isValid(board, N, nr2, nc2)) {
                    String key = nr1 + "," + nc1 + "," + nr2 + "," + nc2;
                    if(!visited.contains(key)) {
                        visited.add(key);
                        q.offer(new Robot(nr1, nc1, nr2, nc2, cur.time + 1));
                    }
                }
            }
            
            // 2. 회전
            if(cur.r1 == cur.r2) {  // 가로 상태
                int[] rotateDir = {-1, 1};  // 위, 아래
                for(int d : rotateDir) {
                    // (r1, c1) 축
                    if(isValid(board, N, cur.r1 + d, cur.c1) && 
                       isValid(board, N, cur.r2 + d, cur.c2)) {
                        int nr = cur.r1 + d;
                        String key = Math.min(cur.r1, nr) + "," + cur.c1 + "," + 
                                     Math.max(cur.r1, nr) + "," + cur.c1;
                        if(!visited.contains(key)) {
                            visited.add(key);
                            q.offer(new Robot(Math.min(cur.r1, nr), cur.c1, 
                                            Math.max(cur.r1, nr), cur.c1, cur.time + 1));
                        }
                    }
                    
                    // (r2, c2) 축
                    if(isValid(board, N, cur.r1 + d, cur.c1) && 
                       isValid(board, N, cur.r2 + d, cur.c2)) {
                        int nr = cur.r2 + d;
                        String key = Math.min(cur.r2, nr) + "," + cur.c2 + "," + 
                                     Math.max(cur.r2, nr) + "," + cur.c2;
                        if(!visited.contains(key)) {
                            visited.add(key);
                            q.offer(new Robot(Math.min(cur.r2, nr), cur.c2, 
                                            Math.max(cur.r2, nr), cur.c2, cur.time + 1));
                        }
                    }
                }
            } else {  // 세로 상태
                int[] rotateDir = {-1, 1};  // 좌, 우
                for(int d : rotateDir) {
                    // (r1, c1) 축
                    if(isValid(board, N, cur.r1, cur.c1 + d) && 
                       isValid(board, N, cur.r2, cur.c2 + d)) {
                        int nc = cur.c1 + d;
                        String key = cur.r1 + "," + Math.min(cur.c1, nc) + "," + 
                                     cur.r1 + "," + Math.max(cur.c1, nc);
                        if(!visited.contains(key)) {
                            visited.add(key);
                            q.offer(new Robot(cur.r1, Math.min(cur.c1, nc), 
                                            cur.r1, Math.max(cur.c1, nc), cur.time + 1));
                        }
                    }
                    
                    // (r2, c2) 축
                    if(isValid(board, N, cur.r1, cur.c1 + d) && 
                       isValid(board, N, cur.r2, cur.c2 + d)) {
                        int nc = cur.c2 + d;
                        String key = cur.r2 + "," + Math.min(cur.c2, nc) + "," + 
                                     cur.r2 + "," + Math.max(cur.c2, nc);
                        if(!visited.contains(key)) {
                            visited.add(key);
                            q.offer(new Robot(cur.r2, Math.min(cur.c2, nc), 
                                            cur.r2, Math.max(cur.c2, nc), cur.time + 1));
                        }
                    }
                }
            }
        }
        
        return -1;
    }
    
    boolean isValid(int[][] board, int N, int r, int c) {
        return r >= 0 && r < N && c >= 0 && c < N && board[r][c] == 0;
    }
}