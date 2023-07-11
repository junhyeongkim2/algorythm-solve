import java.io.*;
import java.util.*;

public class Main {



    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());
        ArrayList<Integer> al = new ArrayList<Integer>();

        while(st.hasMoreTokens()){
            al.add(Integer.parseInt(st.nextToken()));

        }

        int m = Integer.parseInt(br.readLine());

        Collections.sort(al);


        int left =0;
        int right = al.get(al.size()-1);
        int middle = 0;
        int result = 0;
        int sum = 0;

        while(left<=right){
            sum = 0;
            middle = (left+right)/2;

            for(int i = 0; i <n; i++){
                sum += Math.min(al.get(i),middle);
            }

            if(sum<=m){
                left = middle+1;
                result = middle;
            }else{
                right = middle-1;
            }
        }

        System.out.println(result);

    }
}
