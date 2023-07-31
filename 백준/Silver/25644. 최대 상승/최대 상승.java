import java.io.*;
import java.sql.Array;
import java.util.*;



public class Main {






    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));



        int n = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());

        ArrayList<Integer> arr = new ArrayList<Integer>();

        while(st.hasMoreTokens()){
            int a = Integer.parseInt(st.nextToken());
            arr.add(a);
        }


        if(n == 1){
            System.out.println(0);
            return;
        }

        int now  = arr.get(0);
        int ans = 0;
        for(int i = 0 ; i < n ; i++){

            if(now > arr.get(i)){
                now = arr.get(i);
            }else if ( now < arr.get(i)){
                ans = Math.max(ans,arr.get(i)-now);
            }

        }

        System.out.println(ans);









    }








}
