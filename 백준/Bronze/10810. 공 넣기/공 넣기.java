import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {

        int n,m;

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        int []arr = new int[n+1];


        for(int i = 0 ; i < m ; i++){
            int a,b,c;

            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            for(int j = a; j <= b; j++){
                arr[j]=c;
            }

        }

        for(int i = 1 ; i <= n; i++){
            System.out.print(arr[i]+" ");
        }

    }
}
