import java.io.*;
import java.util.*;


public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        int n = Integer.parseInt(s);

        Vector<Integer> v = new Vector<Integer>();


        StringTokenizer st = new StringTokenizer(br.readLine());


        for(int i = 0 ; i < n ; i++){
            if(st.hasMoreTokens()){
                int temp = Integer.parseInt(st.nextToken());
                v.add(temp);
            }
        }

        Collections.sort(v);

        int ans = 0;

        for(int i= 0 ;i < n; i++){
            int l = 0;
            int r = n-1;

            while(l<r){
                if(l==i){l++; continue;}
                if(r==i){r--; continue;}
                if(v.get(i) > v.get(l)+v.get(r)){l++;continue;}
                if (v.get(i) < v.get(l)+v.get(r)){r--;continue;}
                if(v.get(i) == v.get(l)+v.get(r)){ans++;break;}
            }




        }

        System.out.println(ans);

    }
}