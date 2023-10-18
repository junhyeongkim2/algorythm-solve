import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    static final int INF = 987654321;

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int[][] map = new int[n+1][n+1];

        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < n ; j++){
                map[i][j] = sc.nextInt();
            }
        }


        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(map[i][k] + map[k][j] < map[i][j]){
                        map[i][j] = map[i][k] + map[k][j];
                    }
                }
            }
        }


        for(int i = 0 ; i < m ; i++){
            int a,b,c;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            if(map[a-1][b-1] <= c){
                System.out.println("Enjoy other party");
            }else{
                System.out.println("Stay here");
            }

        }





    }
}
