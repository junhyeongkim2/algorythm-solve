import java.io.*;
import java.util.*;


public class Main {



    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());

        ArrayList<Integer> arrayList = new ArrayList<Integer>();

        int [] count = new int[51];

        while(st.hasMoreTokens()){
            arrayList.add(Integer.parseInt(st.nextToken()));
        }

        for (int i = 1; i <=n ; i++) {
            double max = -1000000000;
            for (int j = i+1; j <=n ; j++) {

                if(max < Double.valueOf(arrayList.get(i-1)-arrayList.get(j-1) )/Double.valueOf(i-j) ){
                    max = Double.valueOf(arrayList.get(i-1)-arrayList.get(j-1) )/Double.valueOf(i-j);
                    count[i]++;
                    count[j]++;

                    //System.out.println(arrayList.get(i-1) + " " + arrayList.get(j-1) + " " + i + " " + j + " " + max);
                }

            }
        }

//        for(int i = 0 ; i < n ; i++ ){
//            System.out.println(count[i]);
//
//        }


        System.out.println(Arrays.stream(count).max().getAsInt());




    }
}
