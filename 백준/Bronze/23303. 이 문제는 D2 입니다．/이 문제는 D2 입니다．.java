import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    static boolean prime[] = new boolean[10001];

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);


        StringTokenizer st = new StringTokenizer(br.readLine());


        Boolean flag = false;

        while(st.hasMoreTokens()){
            String s = st.nextToken();
            if(s.contains("D2") || s.contains("d2")){
                System.out.println("D2");
                flag = true;
                break;
            }
        }

        if(flag==false){
            System.out.println("unrated");
        }




    }
}
