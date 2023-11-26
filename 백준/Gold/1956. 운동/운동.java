import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    private static int[][] graph = new int[501][501];

    private static int INF = 1000000000;

    private static int n;
    private static int m;

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        setting();

        for (int i = 0; i < m; i++) {
            int a, b, c;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            graph[a][b] = c;
        }

        floyd();


        int ans =INF ;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == j) {
                    continue;
                }
                if (graph[i][j] != INF && graph[j][i] != INF) {
                    ans = Math.min(ans, graph[i][j] + graph[j][i]);
                }

            }
        }

        if(ans==INF){
            System.out.println(-1);
        }else{
            System.out.println(ans);
        }


    }

    public static void setting() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                graph[i][j] = INF;
                if (i == j) {
                    graph[i][j] = 0;
                }
            }
        }
    }

    public static void floyd() {

        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (graph[i][j] > graph[i][k] + graph[k][j]) {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }

                }
            }
        }


    }


}
