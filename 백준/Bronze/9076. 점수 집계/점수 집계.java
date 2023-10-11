import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {

        int n;

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();


        for(int i = 0; i < n ; i ++){

            int [] arr = new int[5];
            int [] arr2 = new int[3];

            for(int j = 0 ; j < 5; j++){
                arr[j] = sc.nextInt();
            }

            Arrays.sort(arr);

            arr2[0] = arr[1];
            arr2[1] = arr[2];
            arr2[2] = arr[3];

            Arrays.sort(arr2);

            if(arr2[2] - arr[1] >=4){
                System.out.println("KIN");
            }else{
                System.out.println(arr2[0]+arr2[1]+arr2[2]);
            }
            

        }












    }
}
