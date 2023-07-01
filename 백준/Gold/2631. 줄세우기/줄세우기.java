import java.io.*;
import java.util.*;


public class Main {
    static int n;
    static int [] dp = new int [201];
    static int [] arr = new int [201];
    static int maxdp = 0;

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        n = Integer.parseInt(s);


        for (int i = 0; i <n ; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            dp[i]=1;
        }


        for (int i = 0; i <n ; i++) {
            for (int j = 0; j <i; j++) {
                if(arr[i] > arr[j]){
                    dp[i] = Math.max(dp[i],dp[j]+1);
                    maxdp = Math.max(maxdp,dp[i]);
                }
            }
        }


        System.out.println(n-maxdp);


    }
}