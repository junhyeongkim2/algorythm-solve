import java.io.*;
import java.util.*;

public class Main {

    static int n;
    static int m;
    static char[][] board;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};

    // 빨간 구슬과 파란 구슬의 위치와 bfs에 필요한 카운트 값을 가지고 있는 클래스
    static class PairBeads {
        int redX;
        int redY;
        int blueX;
        int blueY;
        int cnt;

        public PairBeads(int redX, int redY, int blueX, int blueY, int cnt) {
            this.redX = redX;
            this.redY = redY;
            this.blueX = blueX;
            this.blueY = blueY;
            this.cnt = cnt;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        board = new char[n][m];

        for (int i = 0; i < n; i++) {
            board[i] = br.readLine().toCharArray();
        }

        PairBeads pb = new PairBeads(0, 0, 0, 0, 0);

        // 빨간 구슬과 파란 구슬의 초기 위치를 찾습니다.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'R') {
                    pb.redX = i;
                    pb.redY = j;
                    board[i][j] = '.';
                }
                if (board[i][j] == 'B') {
                    pb.blueX = i;
                    pb.blueY = j;
                    board[i][j] = '.';
                }
            }
        }

        System.out.println(bfs(pb));
    }

    static int bfs(PairBeads pb) {
        Queue<PairBeads> queue = new LinkedList<>();
        queue.offer(pb);

        while (!queue.isEmpty()) {
            PairBeads beads = queue.poll();

            // 10번 움직인 경우에는 패스합니다.
            if (beads.cnt == 10) {
                continue;
            }

            for (int d = 0; d < 4; d++) {
                int redX = beads.redX;
                int redY = beads.redY;
                int blueX = beads.blueX;
                int blueY = beads.blueY;
                boolean isRedHole = false;
                boolean isBlueHole = false;

                // 빨간 구슬을 해당 방향으로 벽과 마주할 때 까지 이동시킵니다.
                while (true) {
                    int newRedX = redX + dx[d];
                    int newRedY = redY + dy[d];
                    if (board[newRedX][newRedY] == '#') {
                        break;
                    }

                    // 빨간 구슬이 구멍에 빠진 경우 체크합니다.
                    if (board[newRedX][newRedY] == 'O') {
                        isRedHole = true;
                        break;
                    }

                    redX = newRedX;
                    redY = newRedY;
                }

                // 파란 구슬을 해당 방향으로 벽과 마주할 때 까지 이동시킵니다.
                while (true) {
                    int newBlueX = blueX + dx[d];
                    int newBlueY = blueY + dy[d];
                    if (board[newBlueX][newBlueY] == '#') {
                        break;
                    }

                    // 파란 구슬이 구멍에 빠진 경우 체크합니다.
                    if (board[newBlueX][newBlueY] == 'O') {
                        isBlueHole = true;
                        break;
                    }

                    blueX = newBlueX;
                    blueY = newBlueY;
                }

                // 만약 파란 구슬이 구멍에 빠졌다면 실패입니다.
                if (isBlueHole) {
                    continue;
                } else if (isRedHole) {
                    // 빨간 구슬만 구멍에 빠졌다면 시도한 카운트 값을 반환합니다.
                    return beads.cnt + 1;
                }

                // 경우의 수를 줄이기 위해 두 구슬의 위치가 그대로인 경우에는 큐에 집어넣지 않습니다.
                if (beads.redX == redX && beads.redY == redY && beads.blueX == blueX && beads.blueY == blueY) {
                    continue;
                }

                // 구슬이 같은 선상에 위치해 겹쳐지는 경우에는 구슬이 겹치지 않도록 이동해줍니다.
                if (redX == blueX && redY == blueY) {
                    // 구슬이 아랫쪽으로 움직인 경우
                    if (d == 0) {
                        if (beads.redX < beads.blueX) {
                            redX--;
                        } else {
                            blueX--;
                        }
                    } else if (d == 1) {
                        // 구슬이 윗쪽으로 움직인 경우
                        if (beads.redX < beads.blueX) {
                            blueX++;
                        } else  {
                            redX++;
                        }
                    } else if (d == 2) {
                        // 구슬이 오른쪽으로 움직인 경우
                        if (beads.redY < beads.blueY) {
                            redY--;
                        } else {
                            blueY--;
                        }
                    } else if (d == 3) {
                        // 구슬이 왼쪽으로 움직인 경우
                        if (beads.redY < beads.blueY) {
                            blueY++;
                        } else {
                            redY++;
                        }
                    }
                }

                queue.offer(new PairBeads(redX, redY, blueX, blueY, beads.cnt + 1));
            }
        }

        return -1;
    }
}