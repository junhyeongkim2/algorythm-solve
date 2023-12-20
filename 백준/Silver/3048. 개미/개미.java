import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    static String s;

    static int way[];


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        way = new int[n + m];

        String s1 = br.readLine();
        String s2 = br.readLine();
        int t = Integer.parseInt(br.readLine());

        StringBuffer sb = new StringBuffer(s1);
        s1 = sb.reverse().toString();

        String s = s1 + s2;

        char[] arr = s.toCharArray();

        for (int i = 0; i < n; i++) {
            way[i] = 1;
        }

        for (int i = n; i < n + m; i++) {
            way[i] = 2;
        }

        while (t-- > 0) {
            for (int i = 1; i < n + m; i++) {

                if (way[i - 1] == 1 && way[i] == 2) {
                    way[i - 1] = 2;
                    way[i] = 1;

                    char tempChar = arr[i - 1];
                    arr[i - 1] = arr[i];
                    arr[i] = tempChar;
                    i++;
                }

            }
        }

        System.out.println(arr);


    }
}