import java.io.*;
import java.util.*;


public class Main {

    static int N;
    static int M;
    static int[][] cheese;
    static int[][] air;
    static int[][] visited;
    static int[] dx = {1, 0, -1, 0};
    static int[] dy = {0, -1, 0, 1};
    static int cheeseCount = 0;


    public static class MeltingSpot {
        int y;
        int x;

        public MeltingSpot(int y, int x) {
            this.x = x;
            this.y = y;
        }
    }


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        visited = new int[N][M];
        cheese = new int[N][M];
        air = new int[N][M];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                cheese[i][j] = Integer.parseInt(st.nextToken());
                if (cheese[i][j] == 1) {
                    cheeseCount++;
                }
            }
        }
//        System.out.println(cheeseCount);

        int ans = 0;

        while (cheeseCount > 0) {
//            System.out.println("checkExternalAir started");
            visited = new int[N][M];
            checkExternalAir(0, 0);
//            System.out.println("meltingCheese started");
            meltingCheese();
            ans++;
        }
        System.out.println(ans);

    }


    private static void meltingCheese() {
        List<MeltingSpot> meltingSpots = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (cheese[i][j] == 1) {
                    if (isMelting(i, j)) {
                        meltingSpots.add(new MeltingSpot(i, j));
                    }
                }
            }
        }

        for (int i = 0; i < meltingSpots.size(); i++) {
            int ny = meltingSpots.get(i).y;
            int nx = meltingSpots.get(i).x;

            cheese[ny][nx] = 0;
            cheeseCount--;

//            System.out.println(ny + " " + nx + " " + cheeseCount);
        }

    }

    private static Boolean isMelting(int y, int x) {
        int exposedByAirCheeseCount = 0;
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (air[ny][nx] == 1) {
                exposedByAirCheeseCount++;
            }
        }
        if (exposedByAirCheeseCount >= 2) {
            return true;
        }
        return false;
    }

    private static void checkExternalAir(int y, int x) {

        visited[y][x] = 1;
        air[y][x] = 1;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || ny >= N || nx >= M || visited[ny][nx] == 1 || cheese[ny][nx] == 1) {
                continue;
            }
            checkExternalAir(ny, nx);
        }
    }

}