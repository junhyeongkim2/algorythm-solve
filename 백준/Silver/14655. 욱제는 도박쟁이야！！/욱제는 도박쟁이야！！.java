import java.util.*;
import java.io.*;


public class Main {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int ans = 0;
        for(int i = 0 ; i < n ; i ++){
            int a;
            a = sc.nextInt();
            ans += Math.abs(a);
        }

        for(int i = 0 ; i < n ; i ++){
            int a;
            a = sc.nextInt();
            ans += Math.abs(a);
        }


        System.out.println(ans);







    }
}