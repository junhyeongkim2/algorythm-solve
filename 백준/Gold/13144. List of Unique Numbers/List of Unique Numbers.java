import java.io.*;
import java.util.*;


public class Main {



    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        
        int [] arr = new int[100001];
        int [] visited = new int [100001];

        StringTokenizer st = new StringTokenizer(br.readLine());

        int arrindex=0;

        while(st.hasMoreTokens()){
            arr[arrindex]= Integer.parseInt(st.nextToken());
            arrindex++;
        }

        int end = 0;
        long res = 0;

        for (int i = 0; i < n ; i++) {
            while(end<n){
                if(visited[arr[end]]==1)break;
                visited[arr[end]]=1;
                end++;
            }
            res+=(end-i);
            visited[arr[i]]=0;
        }

        System.out.println(res);



    }
}
