import java.io.*;
import java.util.*;

public class Main {

    static int r, c, t;
    static int map[][];
    static int dy[] = {0, 0, -1, 1};
    static int dx[] = {1, -1, 0, 0};
    static List<AirCleaner> airCleaners = new ArrayList<>();

    public static class AirCleaner {
        int y;
        int x;

        public AirCleaner(int y, int x) {
            this.y = y;
            this.x = x;
        }
    }

    public static class Dust {
        int y;
        int x;
        int amount;

        public Dust(int y, int x, int amount) {
            this.y = y;
            this.x = x;
            this.amount = amount;
        }
    }


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        r = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());
        t = Integer.parseInt(st.nextToken());

        map = new int[r][c];

        for (int i = 0; i < r; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < c; j++) {
                map[i][j] = Integer.parseInt(st.nextToken());
                if (map[i][j] == -1) {
                    airCleaners.add(new AirCleaner(i, j));
                }
            }
        }

        while (t-- > 0) {
            spread(findDusts());
            rotate();
        }
        System.out.println(calculateRemainDusts());



    }

    private static int calculateRemainDusts() {
        int remainDusts = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (map[i][j] > 0) {
                    remainDusts += map[i][j];
                }
            }
        }
        return remainDusts;
    }

    //clockwise / 시계방향
    //counterclockwise / 반시계방향
    private static void rotate() {

        rotateClockWise();
        rotateCounterClockWise();
    }


    private static void rotateClockWise() {
        int bottom = airCleaners.get(1).y;

        for (int y = bottom + 1; y < r - 1; y++) {
            map[y][0] = map[y + 1][0];
        }

        for (int x = 0; x < c - 1; x++) {
            map[r - 1][x] = map[r - 1][x + 1];
        }

        for (int y = r - 1; y > bottom; y--) {
            map[y][c - 1] = map[y - 1][c - 1];
        }

        for (int x = c - 1; x > 0; x--) {
            map[bottom][x] = map[bottom][x - 1];
        }

        map[bottom][1] = 0;


    }

    private static void rotateCounterClockWise() {

        int top = airCleaners.get(0).y;

        for (int y = top - 1; y > 0; y--) {
            map[y][0] = map[y - 1][0];
        }

        for (int x = 0; x < c - 1; x++) {
            map[0][x] = map[0][x + 1];
        }

        for (int y = 0; y < top; y++) {
            map[y][c - 1] = map[y + 1][c - 1];
        }

        for (int x = c - 1; x > 0; x--) {
            map[top][x] = map[top][x - 1];
        }

        map[top][1] = 0;


    }

    private static void printMap() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print(map[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    private static List<Dust> findDusts() {
        List<Dust> dusts = new ArrayList<>();

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (map[i][j] != -1 && map[i][j] != 0) {
                    dusts.add(new Dust(i, j, map[i][j]));
                }
            }
        }

        return dusts;
    }

    private static void spread(List<Dust> dusts) {

        for (int i = 0; i < dusts.size(); i++) {
            int cy = dusts.get(i).y;
            int cx = dusts.get(i).x;
            int amount = dusts.get(i).amount;
            int spreadAmount = amount / 5;
            int spreadDirectionCount = 0;

            for (int j = 0; j < 4; j++) {
                int ny = cy + dy[j];
                int nx = cx + dx[j];
                if (ny >= 0 && nx >= 0 && ny < r && nx < c && map[ny][nx] != -1) {
                    spreadDirectionCount++;
                }
            }

            map[cy][cx] = map[cy][cx] - spreadAmount * spreadDirectionCount;

            for (int j = 0; j < 4; j++) {
                int ny = cy + dy[j];
                int nx = cx + dx[j];
                if (ny >= 0 && nx >= 0 && ny < r && nx < c && map[ny][nx] != -1) {
                    map[ny][nx] += spreadAmount;
                }
            }


        }


    }
}
