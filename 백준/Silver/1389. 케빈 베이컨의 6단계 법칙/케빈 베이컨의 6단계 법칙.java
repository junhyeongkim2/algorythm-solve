import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    private static int[][] graph = new int[101][101];

    private static int INF = 987654321;

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        int n, m;
        n = sc.nextInt();
        m = sc.nextInt();

        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                if (k == i) {
                    graph[k][i] = 0;
                } else {
                    graph[k][i] = INF;
                }

            }
        }

        for (int i = 0; i < m; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            graph[a][b] = 1;
            graph[b][a] = 1;
        }

        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (graph[i][j] > graph[i][k] + graph[k][j]) {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
            }
        }
        
        int min = INF;

        int idx = 0;

        for (int k = 1; k <= n; k++) {
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                sum += graph[k][i];
            }
            if (min > sum) {
                min = Math.min(min, sum);
                idx = k;
            }
        }

        System.out.println(idx);


    }


}
