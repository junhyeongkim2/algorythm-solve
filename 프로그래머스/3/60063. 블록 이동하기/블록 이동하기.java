import java.util.*;

class Solution {
    public int solution(int[][] board) {
        int N = board.length;
        Queue<int[]> q = new LinkedList<>();
        boolean[][][] visited = new boolean[N][N][2];  // [행][열][방향] (0=가로, 1=세로)
        
        q.offer(new int[]{0, 0, 0, 0});  // r, c, dir, time
        visited[0][0][0] = true;
        
        while(!q.isEmpty()) {
            int[] cur = q.poll();
            int r = cur[0], c = cur[1], dir = cur[2], time = cur[3];
            
            // 도착 체크
            if((dir == 0 && (c == N-1 || c+1 == N-1) && r == N-1) ||
               (dir == 1 && (r == N-1 || r+1 == N-1) && c == N-1)) {
                return time;
            }
            
            // 1. 상하좌우 이동
            for(int[] d : new int[][]{{-1,0}, {1,0}, {0,-1}, {0,1}}) {
                int nr = r + d[0], nc = c + d[1];
                if(ok(board, N, nr, nc, dir) && !visited[nr][nc][dir]) {
                    visited[nr][nc][dir] = true;
                    q.offer(new int[]{nr, nc, dir, time + 1});
                }
            }
            
            // 2. 회전
            if(dir == 0) {  // 가로 → 세로
                for(int dr : new int[]{-1, 1}) {
                    // 대각선 2칸 체크
                    if(check(board, N, r+dr, c) && check(board, N, r+dr, c+1)) {
                        // (r, c) 축 회전
                        int nr = Math.min(r, r+dr);
                        if(!visited[nr][c][1]) {
                            visited[nr][c][1] = true;
                            q.offer(new int[]{nr, c, 1, time + 1});
                        }
                        // (r, c+1) 축 회전
                        if(!visited[nr][c+1][1]) {
                            visited[nr][c+1][1] = true;
                            q.offer(new int[]{nr, c+1, 1, time + 1});
                        }
                    }
                }
            } else {  // 세로 → 가로
                for(int dc : new int[]{-1, 1}) {
                    // 대각선 2칸 체크
                    if(check(board, N, r, c+dc) && check(board, N, r+1, c+dc)) {
                        // (r, c) 축 회전
                        int nc = Math.min(c, c+dc);
                        if(!visited[r][nc][0]) {
                            visited[r][nc][0] = true;
                            q.offer(new int[]{r, nc, 0, time + 1});
                        }
                        // (r+1, c) 축 회전
                        if(!visited[r+1][nc][0]) {
                            visited[r+1][nc][0] = true;
                            q.offer(new int[]{r+1, nc, 0, time + 1});
                        }
                    }
                }
            }
        }
        return -1;
    }
    
    // 이동 가능 체크 (로봇이 차지하는 2칸 모두 확인)
    boolean ok(int[][] b, int N, int r, int c, int dir) {
        if(!check(b, N, r, c)) return false;
        if(dir == 0) return check(b, N, r, c+1);  // 가로: 오른쪽 칸
        return check(b, N, r+1, c);  // 세로: 아래 칸
    }
    
    // 단일 칸 체크
    boolean check(int[][] b, int N, int r, int c) {
        return r >= 0 && r < N && c >= 0 && c < N && b[r][c] == 0;
    }
}