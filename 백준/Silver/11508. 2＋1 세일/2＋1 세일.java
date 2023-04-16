import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class Main{    
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n  = sc.nextInt();

        Integer arr[] = new Integer[n];

        for(int i = 0 ; i < n; i++){
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr, Comparator.reverseOrder());

        int sum =0;

        for(int i = 0 ; i < n ; i++){
            if(i%3==2)continue;
            sum += arr[i];
        }

        System.out.println(sum);

    }
    
}

