import java.io.*;
import java.util.*;


public class Main {



    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int m = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        ArrayList<Integer> al = new ArrayList<Integer>();

        al.add(0);
        while(st.hasMoreTokens()){
            al.add(Integer.parseInt(st.nextToken()));
        }
        al.add(n);

        int max = 0;

        for (int i = 1; i <al.size() ; i++) {
            int temp = 0;

            if(i==1||i==al.size()-1){
                temp = al.get(i) - al.get(i-1);
            }else{
                if((al.get(i)-al.get(i-1))%2==0){
                    temp = (al.get(i) - al.get(i-1))/2;
                }else{
                    temp = ((al.get(i) - al.get(i-1))/2)+1;
                }
            }

            if(max < temp){
                max = temp;
            }
        }

        System.out.println(max);










    }
}
