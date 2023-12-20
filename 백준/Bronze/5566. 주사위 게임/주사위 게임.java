import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class Main {


    static int map[];
    static int dices[];
    static int currentLocation;
    static int ans = 0;


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        map = new int[n];
        dices = new int[m];

        for (int i = 0; i < n; i++) {
            map[i] = Integer.parseInt(br.readLine());
        }

        for (int i = 0; i < m; i++) {
            dices[i] = Integer.parseInt(br.readLine());
        }

        for (int i = 0; i < m; i++) {
            ans++;
            currentLocation += dices[i];

            if(currentLocation >= n-1){
                break;
            }

            currentLocation += map[currentLocation];

            if(currentLocation >= n-1){
                break;
            }


        }

        System.out.println(ans);


    }
}