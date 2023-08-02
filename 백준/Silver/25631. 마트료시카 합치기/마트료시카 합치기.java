import java.io.*;
import java.sql.Array;
import java.util.*;



public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());

        ArrayList<Integer> arr = new ArrayList<>();

        while(st.hasMoreTokens()){
            arr.add(Integer.parseInt(st.nextToken()));
        }

        Collections.sort(arr);


        int ans = 0;
        while(true){

            int temp = 0;
            int cnt = 0 ;
            ans ++ ;

            for(int i = 0 ; i < arr.size(); i++){
                if(temp < arr.get(i)){
                    temp = arr.get(i);
                    //System.out.println(arr.get(i));
                    arr.set(i,0);
                }
                if(arr.get(i)==0){
                    cnt++;
                }
                
            }

            if( cnt == n){
                break;
            }


        }
        System.out.println(ans);







    }
}
