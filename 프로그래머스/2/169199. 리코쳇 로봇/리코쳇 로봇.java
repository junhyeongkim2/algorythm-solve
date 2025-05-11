import java.util.*;

public class Solution {
    static class Point {
        int y, x, dist;
        Point(int y, int x, int dist) {
            this.y = y;
            this.x = x;
            this.dist = dist;
        }
    }

    public int solution(String[] board) {
        int H = board.length, W = board[0].length();
        char[][] g = new char[H][W];
        Point start = null, goal = null;
        for (int i = 0; i < H; i++) {
            g[i] = board[i].toCharArray();
            for (int j = 0; j < W; j++) {
                if (g[i][j] == 'R') start = new Point(i, j, 0);
                else if (g[i][j] == 'G') goal  = new Point(i, j, 0);
            }
        }

        // 네 방향: 우, 좌, 상, 하
        int[] dy = {0, 0, -1, 1};
        int[] dx = {1, -1, 0, 0};

        boolean[][] visited = new boolean[H][W];
        Queue<Point> q = new ArrayDeque<>();
        q.add(start);
        visited[start.y][start.x] = true;

        while (!q.isEmpty()) {
            Point cur = q.poll();
            if (cur.y == goal.y && cur.x == goal.x) {
                return cur.dist;    // BFS이므로 최초 발견이 최단 이동
            }

            // 네 방향으로 “미끄러지기”
            for (int dir = 0; dir < 4; dir++) {
                int ny = cur.y, nx = cur.x;
                // 한 칸씩 이동하며 장애물 또는 경계를 만날 때까지
                while (true) {
                    int ty = ny + dy[dir], tx = nx + dx[dir];
                    if (ty < 0 || tx < 0 || ty >= H || tx >= W || g[ty][tx] == 'D') {
                        break;
                    }
                    ny = ty;
                    nx = tx;
                }
                // (ny,nx)가 “멈춘 지점”
                if (!visited[ny][nx]) {
                    visited[ny][nx] = true;
                    q.add(new Point(ny, nx, cur.dist + 1));
                }
            }
        }

        // 도달 불가
        return -1;
    }
}
