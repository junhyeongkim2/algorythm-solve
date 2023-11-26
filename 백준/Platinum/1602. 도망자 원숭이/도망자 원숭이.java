import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    private static int[][] graph = new int[501][501];

    private static int INF = 1000000000;

    private static int n;
    private static int m;
    private static int q;
    private static int[] dog = new int[501];

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();
        q = sc.nextInt();

        int[][] dist = new int[n + 1][n + 1];
        int[][] cost = new int[n + 1][n + 1];
        int[] dog = new int[n + 1];
        Integer[] lowDogTimeArr = new Integer[n + 1];

        for (int i = 1; i <= n; i++) {
            dog[i] = sc.nextInt();
            lowDogTimeArr[i] = i;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dist[i][j] = (i == j) ? 0 : INF;
                cost[i][j] = (i == j) ? dog[i] : INF;
            }
        }

        for (int i = 0; i < m; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int d = sc.nextInt();
            dist[a][b] = dist[b][a] = d;
            cost[a][b] = cost[b][a] = d + Math.max(dog[a], dog[b]);
        }

        Arrays.sort(lowDogTimeArr, 1, n + 1, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return dog[o1] - dog[o2];
            }
        });

        int idx = -1;

        for (int k = 1; k <= n; k++) {
            idx = lowDogTimeArr[k];
//            System.out.println(lowDogTimeArr[k] + " " + k);
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (dist[i][idx] != INF && dist[idx][j] != INF) {
                        if (dist[i][j] > dist[i][idx] + dist[idx][j]) {
                            dist[i][j] = dist[i][idx] + dist[idx][j];
                        }
                        if (cost[i][j] > dist[i][j] + Math.max(dog[i], Math.max(dog[idx], dog[j]))) {
                            cost[i][j] = dist[i][j] + Math.max(dog[i], Math.max(dog[idx], dog[j]));
                        }
                    }
                }
            }
        }

        while (q-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            System.out.println(cost[a][b] == INF ? "-1" : cost[a][b]);

        }


    }


}
