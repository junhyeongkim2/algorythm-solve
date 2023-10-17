import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {


    public static void main(String[] args) throws NumberFormatException, IOException {

        Scanner sc = new Scanner(System.in);

        int []scores = {100,100,200,200,300,300,400,400,500};
        int []arr = new int[10];

        Boolean hacker = false;
        int sum =0;

        for(int i = 0 ; i < 9; i++){

            int a = sc.nextInt();

            if(a>scores[i]){
                hacker=true;
                break;
            }
            sum+=a;

        }

        if(hacker==true){
            System.out.println("hacker");
        }else if(sum>=100){
            System.out.println("draw");
        }else if(sum<100){
            System.out.println("none");
        }















    }
}
