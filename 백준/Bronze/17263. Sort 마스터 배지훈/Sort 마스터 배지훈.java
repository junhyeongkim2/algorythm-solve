import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;


public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {

        int n;


        int []arr = new int[500001];

        Scanner scanner = new Scanner(System.in);


        n = scanner.nextInt();

        for(int i = 0 ; i < n ; i++){
            arr[i] = scanner.nextInt();
        }

        Arrays.sort(arr);


        System.out.println(arr[arr.length-1]);













    }
}
