import java.io.*;
import java.util.*;


public class Main {



    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());


        int [] gold = new int [1001];
        int [] silver = new int [1001];
        int [] bronze = new int [1001];

        for(int i = 0 ; i < n ; i++){
            st = new StringTokenizer(br.readLine());

            int index = Integer.parseInt(st.nextToken());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            gold[index]=a;
            silver[index]=b;
            bronze[index]=c;

        }

        int res = 1;

        for (int i = 1 ; i <= n; i++){

            if(gold[i] > gold[k]){
                res++;
            }else if(gold[i]==gold[k]){
                if(silver[i]>silver[k]){
                    res++;
                }else if(silver[i]==silver[k]){
                    if(bronze[i]>bronze[k]){
                        res++;
                    }
                }
            }
        }

        System.out.println(res);














    }
}
