import java.io.*;
import java.sql.Array;
import java.util.*;



public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {

        int n,m,x=0, sum=0, box_sum=0;
        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();
        m = scanner.nextInt();

        int []box = new int [n];
        int []book = new int [m];

        for(int i=0;i<n;i++){
            box[i] = scanner.nextInt();
        }

        for(int i=0;i<m;i++){
            book[i] = scanner.nextInt();
        }

        for(int i=0;i<m;i++){
            while(true){
                if(box[x]<book[i]){
                    x++;
                }
                else{
                    box[x] -= book[i];
                    break;
                }
            }
        }

        for(int i=0;i<n;i++){
            sum += box[i];
        }

        System.out.println(sum);









    }
}
