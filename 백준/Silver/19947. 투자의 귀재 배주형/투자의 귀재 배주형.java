import java.io.*;
import java.util.*;
import java.util.stream.Collectors;


public class Main {


    static int h, y;


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        h = Integer.parseInt(st.nextToken());
        y = Integer.parseInt(st.nextToken());

        int[] dp = new int[y + 1];

        dp[0] = h;

        for (int i = 1; i <= y; i++) {
            dp[i] = Math.max(dp[i], (int) (dp[i - 1] * 1.05));
            if (i >= 3) {
                dp[i] = Math.max(dp[i], (int) (dp[i - 3] * 1.2));
            }
            if (i >= 5) {
                dp[i] = Math.max(dp[i], (int) (dp[i - 5] * 1.35));
            }
        }

        System.out.println(dp[y]);


    }


    
}


