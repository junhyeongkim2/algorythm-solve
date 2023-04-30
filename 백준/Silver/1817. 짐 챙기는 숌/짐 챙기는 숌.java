import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;
import java.util.Scanner;




public class Main {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int n=0;
        int m=0;
        int temp=0;

        n = sc.nextInt();
        m = sc.nextInt();
        int cnt = 1;


        for (int i = 0; i < n; i++) {
            int weight=0;
            weight = sc.nextInt();
            if(temp+weight>m){
                cnt++;
                temp=weight;
            }else if(temp+weight<=m){
                temp+=weight;
            }
        }


        if(n==0){
            System.out.print(0);
        }else{
            System.out.print(cnt);
        }









    }
}