import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {

        int n;
        int k;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();


        char [][]graph = new char [101][101];

        for(int i = 0 ; i < n ; i++){
            String s = sc.next();
            for(int j = 0 ; j < n ; j++){
                graph[i][j] = s.charAt(j);
            }
        }
        k = sc.nextInt();

        if(k==1){
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++){
                    System.out.print(graph[i][j]);
                }
                System.out.println();
            }
        }else if(k==2){

            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n/2 ; j++){
                    char temp = graph[i][n-j-1];
                    graph[i][n-j-1] = graph[i][j];
                    graph[i][j]=temp;
                }
            }
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++){
                    System.out.print(graph[i][j]);
                }
                System.out.println();
            }

            
        }else if(k==3){

            for(int i = 0 ; i < n/2 ; i++){
                for(int j = 0 ; j < n ; j++){
                    char temp = graph[n-i-1][j];
                    graph[n-i-1][j] = graph[i][j];
                    graph[i][j]=temp;
                }
            }
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++){
                    System.out.print(graph[i][j]);
                }
                System.out.println();
            }




        }








    }
}
