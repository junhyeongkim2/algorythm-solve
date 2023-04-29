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
        n=sc.nextInt();

        int biggest=0;
        int smallest=100001;

        while(n>0){

            int s,e;
            s = sc.nextInt();
            e = sc.nextInt();

            biggest = Math.max(s,biggest);
            smallest = Math.min(e,smallest);


            n--;
        }

        if(biggest-smallest < 0){
            System.out.println(0);
        }else{
            System.out.println(biggest-smallest);
        }




    }
}