import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    private static int[][] graph = new int[101][101];

    private static int INF = 987654321;

    private static int n;
    private static int m;

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        setting();

        for (int i = 0; i < m; i++) {
            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            graph[a][b] = 1;
            graph[b][a] = -1;
        }

        floyd();


        for(int i = 1 ; i <= n; i++){
            int cnt =0 ;
            for(int j = 1 ; j <= n ; j++){
                if(i==j){
                    continue;
                }
                if(graph[i][j]==0){
                    cnt++;
                }
            }
            System.out.println(cnt);
        }

    }

    public static void setting() {
        for (int i = 1; i <= n; i++) {
            graph[i][i] = 1;
        }
    }

    public static void floyd() {

        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (graph[i][k] == 1 && graph[k][j] == 1) {
                        graph[i][j] = 1;
                    }
                    if (graph[i][k] == -1 && graph[k][j] == -1) {
                        graph[i][j] = -1;
                    }
                }
            }
        }


    }


}
