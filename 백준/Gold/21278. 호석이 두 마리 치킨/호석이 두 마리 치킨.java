import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    private static int INF = 101;
    private static int[][] graph = new int[101][101];

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        int n, m;
        n = sc.nextInt();
        m = sc.nextInt();


        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                graph[i][j] = INF;
                if (i == j) {
                    graph[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            graph[a][b] = 1;
            graph[b][a] = 1;
        }

        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (graph[i][k] + graph[k][j] < graph[i][j]) {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
            }
        }

        int min = 101;

        int p1=0;
        int p2=0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if(i==j) continue;
                int now = sum(i,j,n);
                if(min > now){
                    p1= i;
                    p2 = j;
                    min = now ;
                }

            }
        }

        System.out.println(p1+" "+p2+" "+min*2);


    }




    public static int sum(int p1, int p2, int n) {
        int sum =0;
        for(int i = 1 ; i <= n ; i ++){
            if(i==p1||i==p2)continue;
            sum += Math.min(graph[p1][i],graph[p2][i]);
        }

        return sum;
    }


}
