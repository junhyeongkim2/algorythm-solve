import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    static boolean prime[] = new boolean[10001];

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int ans =0;

        for(int i=1 ; i<=n; i++){
            if(n%i==0){
                ans+=i;
            }
        }

        System.out.println(ans*5-24);















    }
}
